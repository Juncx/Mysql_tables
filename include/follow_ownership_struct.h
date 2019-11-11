#pragma once

enum FOLLOW_OWNERSHIP_TABLE_DESC : int {
	E_FOLLOWUSERID = 0,
	E_MANANGERID,
	E_END
};

const char* const FOLLOW_OWNERSHIP_TABLE = "follow_ownership";

const char* const FOLLOW_OWNERSHIP_TABLE_COLS[E_END] = {
	"followUserID",
	"manangerID",
};

const char* const FOLLOW_OWNERSHIP_TABLE_COLS_ATTR[E_END] = {
	"varchar(64) COLLATE utf8_bin NOT NULL",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '管理员ID'",
};