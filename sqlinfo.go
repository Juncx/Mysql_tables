package main

import (
	"encoding/json"
	"fmt"
	"io/ioutil"

	_ "github.com/go-sql-driver/mysql"
	"github.com/go-xorm/xorm"
)

type Attribute struct {
	Field      string `json:"Field"`
	Type       string `json:"Type"`
	Collation  string `json:"Collation"`
	Null       string `json:"Null"`
	Key        string `json:"Key"`
	Default    string `json:"Default"`
	Extra      string `json:"Extra"`
	Privileges string `json:"Privileges"`
	Comment    string `json:"Comment"`
}

type TableDesc struct {
	Name    string       `json:"Name"`
	Columns []*Attribute `json:"Columns"`
}

func NewEngine() (*xorm.Engine, error) {
	dbDriver := "mysql"
	dbInfo := "192.168.2.207:3306"
	dbUser := "root"
	dbName := "tcversion_web_f"

	// db connct
	//_, err := xorm.NewEngine("mysql", "root:@tcp(\"192.168.2.207:3306\")/tcversion_web_f?charset=utf8")
	dbConn := fmt.Sprintf("%s:@tcp(%s)/%s?charset=utf8", dbUser, dbInfo, dbName)
	engine, err := xorm.NewEngine(dbDriver, dbConn)
	if err != nil {
		panic(err)
	}
	return engine, err
}

func TQuery(engine *xorm.Engine) {
	sql := "select * from users"
	results, err := engine.Query(sql)
	if err != nil {
		panic(err)
	}

	for _, v := range results {
		for kk, vv := range v {
			fmt.Println(kk, ":", string(vv))
		}
	}
}

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

func ShowColumn(engine *xorm.Engine, table string) (*TableDesc, error) {
	sql := fmt.Sprintf("SHOW FULL COLUMNS FROM tcversion_web_f.%s", table)

	results, err := engine.Query(sql)
	if err != nil {
		panic(err)
	}

	tabInfo := &TableDesc{
		Name: table,
	}

	cols := make([]*Attribute, 0)
	for _, v := range results {
		tmp := &Attribute{
			Field:      string(v["Field"]),
			Type:       string(v["Type"]),
			Collation:  string(v["Collation"]),
			Null:       string(v["Null"]),
			Key:        string(v["Key"]),
			Default:    string(v["Default"]),
			Extra:      string(v["Extra"]),
			Privileges: string(v["Privileges"]),
			Comment:    string(v["Comment"]),
		}
		cols = append(cols, tmp)
	}
	tabInfo.Columns = cols

	return tabInfo, err
}

func ShowAllColumns(engine *xorm.Engine) ([]*TableDesc, error) {
	tables, err := ShowTables(engine)
	if err != nil {
		panic(err)
	}

	tableDesc := make([]*TableDesc, 0)
	for _, v := range tables {
		tDesc, _ := ShowColumn(engine, v)
		tableDesc = append(tableDesc, tDesc)
	}

	return tableDesc, err
}

func TablesColAttr(engine *xorm.Engine) {
	tDescs, _ := ShowAllColumns(engine)
	b, err := json.MarshalIndent(tDescs, "", "\t")
	if err != nil {
		panic(err)
	}
	ioutil.WriteFile("tables.json", b, 0666)
}

func main() {
	// create mysql engine
	engine, err := NewEngine()
	if err != nil {
		panic(err)
	}
	_ = engine

	//TablesColAttr(engine)
	GenAllTabMapHpp(engine)
	/*
	 *
	 *    t, _ := ShowTables(engine)
	 *    for _, v := range t {
	 *        fmt.Println(v)
	 *        //fmt.Println(EnumPrefix(v))
	 *    }
	 */

	/*
	 *
	 *    col, err := ShowColumn(engine, "users")
	 *    if err != nil {
	 *        panic(err)
	 *    }
	 *
	 *    for _, v := range col.Columns {
	 *        t := fmt.Sprintf("U_%s,", v.Field)
	 *        t = strings.ToUpper(t)
	 *        fmt.Println(t)
	 *    }
	 *
	 *    for _, v := range col.Columns {
	 *        t := fmt.Sprintf("\"%s\",", v.Field)
	 *        fmt.Println(t)
	 *    }
	 */

}
