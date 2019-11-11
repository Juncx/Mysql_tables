#pragma once

enum AUTHORITY_FUNCTIONS_TABLE_DESC : int {
	E_AUFU_FUNCTIONID = 0,
	E_AUFU_BUSSNESSID,
	E_AUFU_NAVIGATIONID,
	E_AUFU_FUNCTIONNAME,
	E_AUFU_ISSORT,
	E_AUFU_END
};

const char* const AUTHORITY_FUNCTIONS_TABLE = "authority_functions";

const char* const AUTHORITY_FUNCTIONS_TABLE_COLS[E_AUFU_END] = {
	"functionID",
	"bussnessID",
	"navigationID",
	"functionName",
	"issort",
};

const char* const AUTHORITY_FUNCTIONS_TABLE_COLS_ATTR[E_AUFU_END] = {
	"int(10) unsigned NOT NULL COMMENT '功能ID'",
	"int(10) NOT NULL COMMENT '业务ID'",
	"int(10) NOT NULL COMMENT '业务ID'",
	"varchar(64) COLLATE utf8_general_ci NOT NULL COMMENT '功能名称'",
	"tinyint(2) NOT NULL COMMENT '排序 0不排序 1排序'",
};