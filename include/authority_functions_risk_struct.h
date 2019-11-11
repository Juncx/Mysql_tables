#pragma once

enum AUTHORITY_FUNCTIONS_RISK_TABLE_DESC : int {
	E_FUNCTIONID = 0,
	E_FUNCTIONNAME,
	E_END
};

const char* const AUTHORITY_FUNCTIONS_RISK_TABLE = "authority_functions_risk";

const char* const AUTHORITY_FUNCTIONS_RISK_TABLE_COLS[E_END] = {
	"functionID",
	"functionName",
};

const char* const AUTHORITY_FUNCTIONS_RISK_TABLE_COLS_ATTR[E_END] = {
	"int(10) NOT NULL COMMENT '功能id'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '功能名称'",
};