package main

import (
	"fmt"
	"mysql-tables/table"

	_ "github.com/go-sql-driver/mysql"
	"github.com/go-xorm/xorm"
)

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

func main() {
	// create mysql engine
	engine, err := NewEngine()
	if err != nil {
		panic(err)
	}
	_ = engine

	//TablesColAttr(engine)
	table.GenAllTabMapHpp(engine)
}
