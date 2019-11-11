#pragma once

enum AUTHORITY_ROLE_FUNCTIONS_TABLE_DESC : int {
	E_AUROFU_ID = 0,
	E_AUROFU_ROLEID,
	E_AUROFU_FUNCTIONID,
	E_AUROFU_END
};

const char* const AUTHORITY_ROLE_FUNCTIONS_TABLE = "authority_role_functions";

const char* const AUTHORITY_ROLE_FUNCTIONS_TABLE_COLS[E_AUROFU_END] = {
	"id",
	"roleID",
	"functionID",
};

const char* const AUTHORITY_ROLE_FUNCTIONS_TABLE_COLS_ATTR[E_AUROFU_END] = {
	"varchar(64) COLLATE latin1_swedish_ci NOT NULL COMMENT 'id'",
	"varchar(64) COLLATE latin1_swedish_ci NOT NULL COMMENT '角色ID'",
	"int(10) NOT NULL COMMENT '功能ID'",
};