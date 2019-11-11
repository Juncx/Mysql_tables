#pragma once

enum PM_UUID_TABLE_DESC : int {
	E_PMUU_UUID = 0,
	E_PMUU_END
};

const char* const PM_UUID_TABLE = "pm_uuid";

const char* const PM_UUID_TABLE_COLS[E_PMUU_END] = {
	"uuid",
};

const char* const PM_UUID_TABLE_COLS_ATTR[E_PMUU_END] = {
	"varchar(64) COLLATE utf8_bin NOT NULL",
};