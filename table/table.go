package table

import (
	"encoding/json"
	"fmt"
	"io/ioutil"
	"mysql-tables/column"
	"strings"

	"github.com/go-xorm/xorm"
)

func ShowTables(engine *xorm.Engine) ([]string, error) {
	sql := "show tables"
	results, err := engine.Query(sql)
	if err != nil {
		panic(err)
	}

	tables := []string{}
	for _, v := range results {
		for _, vv := range v {
			//fmt.Println(kk, ":", string(vv))
			tables = append(tables, string(vv))
		}
	}

	return tables, err
}

func ShowAllTablesAttr(engine *xorm.Engine) ([]*column.TableDesc, error) {
	tables, err := ShowTables(engine)
	if err != nil {
		panic(err)
	}

	tableDesc := make([]*column.TableDesc, 0)
	for _, v := range tables {
		tDesc, _ := column.ShowColumn(engine, v)
		tableDesc = append(tableDesc, tDesc)
	}

	return tableDesc, err
}

func GenTablesColAttr(engine *xorm.Engine) {
	tDescs, _ := ShowAllTablesAttr(engine)
	b, err := json.MarshalIndent(tDescs, "", "\t")
	if err != nil {
		panic(err)
	}
	ioutil.WriteFile("tables.json", b, 0666)
}

func GenrateHpp(engine *xorm.Engine, table string) {
	cont := make([]string, 0)
	cont = append(cont, head)

	enum := GenTableDescEnum(engine, table)
	cont = append(cont, enum)

	tname := GenTabName(table)
	cont = append(cont, tname)

	tcol := GenTabCols(engine, table)
	cont = append(cont, tcol)

	tcAttr := GenTabColsAttr(engine, table)
	cont = append(cont, tcAttr)

	b := strings.Join(cont, "\n\n")
	//fmt.Println(b)

	fname := fmt.Sprintf("%s/%s_struct.h", "include", table)
	ioutil.WriteFile(fname, []byte(b), 0666)
}

func GenAllTabMapHpp(engine *xorm.Engine) {
	tables, err := ShowTables(engine)
	if err != nil {
		panic(err)
	}

	for _, v := range tables {
		GenrateHpp(engine, v)
	}
}
