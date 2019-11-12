package table

import (
	"fmt"
	"mysql-tables/column"
	"strings"

	"github.com/go-xorm/xorm"
)

var head string = "#pragma once"

func EnumPrefix(table string) string {
	var res string

	fields := strings.Split(table, "_")
	for _, v := range fields {
		res += v[:2]
	}
	return strings.ToUpper(res)
}

func GenTableDescEnum(engine *xorm.Engine, table string) string {
	c := make([]string, 0)
	ename := strings.ToUpper(table + "_TABLE_DESC")
	ename = fmt.Sprintf("enum %s : int {", ename)
	c = append(c, ename)

	pre := EnumPrefix(table)
	// get enmu field
	col, err := column.ShowColumn(engine, table)
	if err != nil {
		panic(err)
	}
	for k, v := range col.Columns {
		t := fmt.Sprintf("\tE_%s_%s,", pre, v.Field)
		t = strings.ToUpper(t)
		if k == 0 {
			t = t[:len(t)-1]
			t = fmt.Sprintf("%s = 0,", t)
		}

		c = append(c, t)
	}

	end := fmt.Sprintf("\tE_%s_END", pre)
	c = append(c, end)
	c = append(c, "};")

	ret := strings.Join(c, "\n")
	return ret
}

func GenTabName(table string) string {
	ele := strings.ToUpper(fmt.Sprintf("%s_TABLE", table))
	ret := fmt.Sprintf("const char* const %s = \"%s\";", ele, table)

	return ret
}

func GenTabCols(engine *xorm.Engine, table string) string {
	c := make([]string, 0)

	pre := EnumPrefix(table)
	ename := strings.ToUpper(table + "_TABLE_COLS")
	ename = fmt.Sprintf("const char* const %s[E_%s_END] = {", ename, pre)

	c = append(c, ename)
	// get enmu field
	col, err := column.ShowColumn(engine, table)
	if err != nil {
		panic(err)
	}
	for _, v := range col.Columns {
		t := fmt.Sprintf("\t\"%s\",", v.Field)

		c = append(c, t)
	}

	c = append(c, "};")
	ret := strings.Join(c, "\n")

	return ret
}

func GenTabColsAttr(engine *xorm.Engine, table string) string {
	c := make([]string, 0)

	pre := EnumPrefix(table)
	ename := strings.ToUpper(table + "_TABLE_COLS_ATTR")
	ename = fmt.Sprintf("const char* const %s[E_%s_END] = {", ename, pre)

	c = append(c, ename)
	// get enmu field
	col, err := column.ShowColumn(engine, table)
	if err != nil {
		panic(err)
	}

	for _, v := range col.Columns {
		attrs := make([]string, 0)
		if v.Type != "" {
			attrs = append(attrs, v.Type)
		}
		if v.Default != "" {
			v.Default = fmt.Sprintf("DEFAULT '%s'", v.Default)
			attrs = append(attrs, v.Default)
		}
		if v.Collation != "" {
			v.Collation = fmt.Sprintf("COLLATE %s", v.Collation)
			attrs = append(attrs, v.Collation)
		}
		if v.Null != "YES" {
			v.Null = "NOT NULL"
			attrs = append(attrs, v.Null)
		}
		if v.Comment != "" {
			v.Comment = strings.ReplaceAll(v.Comment, "\"", "\\\"")
			v.Comment = fmt.Sprintf("COMMENT '%s'", v.Comment)
			attrs = append(attrs, v.Comment)
		}

		t := strings.Join(attrs, " ")
		t = fmt.Sprintf("\t\"%s\",", t)

		c = append(c, t)
	}
	c = append(c, "};")

	ret := strings.Join(c, "\n")

	return ret
}
