#pragma once

enum AUTHORITY_ROLE_FUNCTIONS_TABLE_DESC : int {
	E_ID = 0,
	E_ROLEID,
	E_FUNCTIONID,
	E_END
};

const char* const AUTHORITY_ROLE_FUNCTIONS_TABLE = "authority_role_functions";

const char* const AUTHORITY_ROLE_FUNCTIONS_TABLE_COLS[E_END] = {
	"id",
	"roleID",
	"functionID",
};

const char* const AUTHORITY_ROLE_FUNCTIONS_TABLE_COLS_ATTR[E_END] = {
	"varchar(64) COLLATE latin1_swedish_ci NOT NULL COMMENT 'id'",
	"varchar(64) COLLATE latin1_swedish_ci NOT NULL COMMENT '角色ID'",
	"int(10) NOT NULL COMMENT '功能ID'",
};