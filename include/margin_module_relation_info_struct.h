#pragma once

enum MARGIN_MODULE_RELATION_INFO_TABLE_DESC : int {
	E_ID = 0,
	E_MARGINMODULEID,
	E_MARGINID,
	E_END
};

const char* const MARGIN_MODULE_RELATION_INFO_TABLE = "margin_module_relation_info";

const char* const MARGIN_MODULE_RELATION_INFO_TABLE_COLS[E_END] = {
	"id",
	"marginModuleID",
	"marginID",
};

const char* const MARGIN_MODULE_RELATION_INFO_TABLE_COLS_ATTR[E_END] = {
	"varchar(64) COLLATE utf8_bin NOT NULL",
	"varchar(64) COLLATE utf8_bin NOT NULL",
	"varchar(64) COLLATE utf8_bin NOT NULL",
};