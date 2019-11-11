#pragma once

enum SYSTEM_SET_TABLE_DESC : int {
	E_SYSE_KEY = 0,
	E_SYSE_VALUE,
	E_SYSE_NOTE,
	E_SYSE_END
};

const char* const SYSTEM_SET_TABLE = "system_set";

const char* const SYSTEM_SET_TABLE_COLS[E_SYSE_END] = {
	"key",
	"value",
	"note",
};

const char* const SYSTEM_SET_TABLE_COLS_ATTR[E_SYSE_END] = {
	"char(20) COLLATE utf8_bin NOT NULL",
	"varchar(40) COLLATE utf8_bin NOT NULL",
	"varchar(20) COLLATE utf8_bin NOT NULL",
};