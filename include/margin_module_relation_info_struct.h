#pragma once

enum MARGIN_MODULE_RELATION_INFO_TABLE_DESC : int {
	E_MAMOREIN_ID = 0,
	E_MAMOREIN_MARGINMODULEID,
	E_MAMOREIN_MARGINID,
	E_MAMOREIN_END
};

const char* const MARGIN_MODULE_RELATION_INFO_TABLE = "margin_module_relation_info";

const char* const MARGIN_MODULE_RELATION_INFO_TABLE_COLS[E_MAMOREIN_END] = {
	"id",
	"marginModuleID",
	"marginID",
};

const char* const MARGIN_MODULE_RELATION_INFO_TABLE_COLS_ATTR[E_MAMOREIN_END] = {
	"varchar(64) COLLATE utf8_bin NOT NULL",
	"varchar(64) COLLATE utf8_bin NOT NULL",
	"varchar(64) COLLATE utf8_bin NOT NULL",
};