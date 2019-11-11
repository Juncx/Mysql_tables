#pragma once

enum AUTHORITY_FUNCTIONS_RISK_TABLE_DESC : int {
	E_AUFURI_FUNCTIONID = 0,
	E_AUFURI_FUNCTIONNAME,
	E_AUFURI_END
};

const char* const AUTHORITY_FUNCTIONS_RISK_TABLE = "authority_functions_risk";

const char* const AUTHORITY_FUNCTIONS_RISK_TABLE_COLS[E_AUFURI_END] = {
	"functionID",
	"functionName",
};

const char* const AUTHORITY_FUNCTIONS_RISK_TABLE_COLS_ATTR[E_AUFURI_END] = {
	"int(10) NOT NULL COMMENT '功能id'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '功能名称'",
};