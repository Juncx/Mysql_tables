package main

import (
	"fmt"
	"io/ioutil"
	"strings"

	"github.com/go-xorm/xorm"
)

var head string = "#pragma once"

func GenTableDescEnum(engine *xorm.Engine, table string) string {
	c := make([]string, 0)
	ename := strings.ToUpper(table + "_TABLE_DESC")
	ename = fmt.Sprintf("enum %s : int {", ename)
	c = append(c, ename)

	// get enmu field
	col, err := ShowColumn(engine, table)
	if err != nil {
		panic(err)
	}
	for k, v := range col.Columns {
		t := fmt.Sprintf("\tE_%s,", v.Field)
		t = strings.ToUpper(t)
		if k == 0 {
			t = t[:len(t)-1]
			t = fmt.Sprintf("%s = 0,", t)
		}

		c = append(c, t)
	}

	c = append(c, "\tE_END")
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
	ename := strings.ToUpper(table + "_TABLE_COLS")
	ename = fmt.Sprintf("const char* const %s[E_END] = {", ename)

	c = append(c, ename)
	// get enmu field
	col, err := ShowColumn(engine, table)
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
	ename := strings.ToUpper(table + "_TABLE_COLS_ATTR")
	ename = fmt.Sprintf("const char* const %s[E_END] = {", ename)

	c = append(c, ename)
	// get enmu field
	col, err := ShowColumn(engine, table)
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
