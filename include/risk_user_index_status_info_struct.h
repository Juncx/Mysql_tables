#pragma once

enum RISK_USER_INDEX_STATUS_INFO_TABLE_DESC : int {
	E_ID = 0,
	E_USERID,
	E_INDEXTYPE,
	E_REALINDEX,
	E_RISKSTATUS,
	E_END
};

const char* const RISK_USER_INDEX_STATUS_INFO_TABLE = "risk_user_index_status_info";

const char* const RISK_USER_INDEX_STATUS_INFO_TABLE_COLS[E_END] = {
	"id",
	"userID",
	"indexType",
	"realIndex",
	"riskStatus",
};

const char* const RISK_USER_INDEX_STATUS_INFO_TABLE_COLS_ATTR[E_END] = {
	"int(10) unsigned NOT NULL",
	"varchar(64) COLLATE utf8_general_ci NOT NULL",
	"int(10) DEFAULT '0' NOT NULL COMMENT '1按优先资金百分比，2按劣后资金百分比，3按风险度百分比，4按当日亏损绝对值，5按动态权益绝对值，6按劣后风险度百分比,7按自有资金值'",
	"decimal(32,8) NOT NULL COMMENT '实时指标值'",
	"int(10) DEFAULT '0' NOT NULL COMMENT '风控状态    注： 默认0 表示未触发风控可正常交易的状态'",
};