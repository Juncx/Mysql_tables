#pragma once

enum FOLLOW_SYSTEM_SET_TABLE_DESC : int {
	E_KEY = 0,
	E_VALUE,
	E_NOTE,
	E_END
};

const char* const FOLLOW_SYSTEM_SET_TABLE = "follow_system_set";

const char* const FOLLOW_SYSTEM_SET_TABLE_COLS[E_END] = {
	"key",
	"value",
	"note",
};

const char* const FOLLOW_SYSTEM_SET_TABLE_COLS_ATTR[E_END] = {
	"char(20) COLLATE utf8_bin NOT NULL",
	"varchar(40) COLLATE utf8_bin NOT NULL",
	"varchar(20) COLLATE utf8_bin NOT NULL",
};