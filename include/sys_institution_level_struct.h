#pragma once

enum SYS_INSTITUTION_LEVEL_TABLE_DESC : int {
	E_SYINLE_INSTITUTIONLEVEL = 0,
	E_SYINLE_INSTITUTIONNAME,
	E_SYINLE_END
};

const char* const SYS_INSTITUTION_LEVEL_TABLE = "sys_institution_level";

const char* const SYS_INSTITUTION_LEVEL_TABLE_COLS[E_SYINLE_END] = {
	"institutionLevel",
	"institutionName",
};

const char* const SYS_INSTITUTION_LEVEL_TABLE_COLS_ATTR[E_SYINLE_END] = {
	"tinyint(2) NOT NULL COMMENT '机构层级'",
	"varchar(32) COLLATE utf8_bin NOT NULL COMMENT '该级机构名称'",
};