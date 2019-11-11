#pragma once

enum USER_ONLINE_DEFINE_SET_TABLE_DESC : int {
	E_ID = 0,
	E_INSTITUTIONID,
	E_MAINUSERID,
	E_MARGINMODULEID,
	E_FEEMODULEID,
	E_RISKMODULEID,
	E_END
};

const char* const USER_ONLINE_DEFINE_SET_TABLE = "user_online_define_set";

const char* const USER_ONLINE_DEFINE_SET_TABLE_COLS[E_END] = {
	"id",
	"institutionID",
	"mainUserID",
	"marginModuleID",
	"feeModuleID",
	"riskModuleID",
};

const char* const USER_ONLINE_DEFINE_SET_TABLE_COLS_ATTR[E_END] = {
	"varchar(64) COLLATE latin1_swedish_ci NOT NULL",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '机构ID'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '主账户ID'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '保证金模板ID'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '手续费模板ID'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '风控模板ID'",
};