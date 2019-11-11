#pragma once

enum INSTITUTION_MAINID_MAP_TABLE_DESC : int {
	E_ID = 0,
	E_INSTITUTIONID,
	E_MAINID,
	E_END
};

const char* const INSTITUTION_MAINID_MAP_TABLE = "institution_mainid_map";

const char* const INSTITUTION_MAINID_MAP_TABLE_COLS[E_END] = {
	"id",
	"institutionID",
	"mainID",
};

const char* const INSTITUTION_MAINID_MAP_TABLE_COLS_ATTR[E_END] = {
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '主键'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '代理机构'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '主账户'",
};