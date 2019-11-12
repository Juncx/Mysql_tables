package column

import (
	"fmt"

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
