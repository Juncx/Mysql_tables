#pragma once

enum RISK_USER_OVER_NIGHT_STATUS_INFO_TABLE_DESC : int {
	E_ID = 0,
	E_USERID,
	E_PRODUCTID,
	E_RISKSTATUS,
	E_END
};

const char* const RISK_USER_OVER_NIGHT_STATUS_INFO_TABLE = "risk_user_over_night_status_info";

const char* const RISK_USER_OVER_NIGHT_STATUS_INFO_TABLE_COLS[E_END] = {
	"id",
	"userID",
	"productID",
	"riskStatus",
};

const char* const RISK_USER_OVER_NIGHT_STATUS_INFO_TABLE_COLS_ATTR[E_END] = {
	"int(10) unsigned NOT NULL",
	"varchar(64) COLLATE utf8_general_ci NOT NULL",
	"varchar(64) COLLATE utf8_general_ci NOT NULL",
	"int(10) DEFAULT '0' NOT NULL COMMENT '风控状态  67595触发风控状态，67596解除风控状态'",
};