#pragma once

enum PM_UUID_TABLE_DESC : int {
	E_UUID = 0,
	E_END
};

const char* const PM_UUID_TABLE = "pm_uuid";

const char* const PM_UUID_TABLE_COLS[E_END] = {
	"uuid",
};

const char* const PM_UUID_TABLE_COLS_ATTR[E_END] = {
	"varchar(64) COLLATE utf8_bin NOT NULL",
};