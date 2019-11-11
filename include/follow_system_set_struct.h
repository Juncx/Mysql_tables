#pragma once

enum FOLLOW_SYSTEM_SET_TABLE_DESC : int {
	E_FOSYSE_KEY = 0,
	E_FOSYSE_VALUE,
	E_FOSYSE_NOTE,
	E_FOSYSE_END
};

const char* const FOLLOW_SYSTEM_SET_TABLE = "follow_system_set";

const char* const FOLLOW_SYSTEM_SET_TABLE_COLS[E_FOSYSE_END] = {
	"key",
	"value",
	"note",
};

const char* const FOLLOW_SYSTEM_SET_TABLE_COLS_ATTR[E_FOSYSE_END] = {
	"char(20) COLLATE utf8_bin NOT NULL",
	"varchar(40) COLLATE utf8_bin NOT NULL",
	"varchar(20) COLLATE utf8_bin NOT NULL",
};