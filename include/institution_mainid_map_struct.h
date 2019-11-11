#pragma once

enum INSTITUTION_MAINID_MAP_TABLE_DESC : int {
	E_INMAMA_ID = 0,
	E_INMAMA_INSTITUTIONID,
	E_INMAMA_MAINID,
	E_INMAMA_END
};

const char* const INSTITUTION_MAINID_MAP_TABLE = "institution_mainid_map";

const char* const INSTITUTION_MAINID_MAP_TABLE_COLS[E_INMAMA_END] = {
	"id",
	"institutionID",
	"mainID",
};

const char* const INSTITUTION_MAINID_MAP_TABLE_COLS_ATTR[E_INMAMA_END] = {
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '主键'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '代理机构'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '主账户'",
};