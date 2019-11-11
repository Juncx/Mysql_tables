#pragma once

enum AUTHORITY_CHANGE_LOG_TABLE_DESC : int {
	E_AUCHLO_ID = 0,
	E_AUCHLO_USERID,
	E_AUCHLO_CHANGEDATE,
	E_AUCHLO_CHANGETIME,
	E_AUCHLO_CONTENT,
	E_AUCHLO_END
};

const char* const AUTHORITY_CHANGE_LOG_TABLE = "authority_change_log";

const char* const AUTHORITY_CHANGE_LOG_TABLE_COLS[E_AUCHLO_END] = {
	"id",
	"userID",
	"changeDate",
	"changeTime",
	"content",
};

const char* const AUTHORITY_CHANGE_LOG_TABLE_COLS_ATTR[E_AUCHLO_END] = {
	"int(10) unsigned NOT NULL COMMENT 'id'",
	"int(10) NOT NULL COMMENT '操作者编号'",
	"int(20) NOT NULL COMMENT '操作日期'",
	"int(10) NOT NULL COMMENT '操作时间'",
	"varchar(200) COLLATE utf8_general_ci NOT NULL COMMENT '操作内容'",
};