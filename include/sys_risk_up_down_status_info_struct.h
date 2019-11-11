#pragma once

enum SYS_RISK_UP_DOWN_STATUS_INFO_TABLE_DESC : int {
	E_SYRIUPDOSTIN_CONTRACTID = 0,
	E_SYRIUPDOSTIN_RISKSTATUS,
	E_SYRIUPDOSTIN_END
};

const char* const SYS_RISK_UP_DOWN_STATUS_INFO_TABLE = "sys_risk_up_down_status_info";

const char* const SYS_RISK_UP_DOWN_STATUS_INFO_TABLE_COLS[E_SYRIUPDOSTIN_END] = {
	"contractID",
	"riskStatus",
};

const char* const SYS_RISK_UP_DOWN_STATUS_INFO_TABLE_COLS_ATTR[E_SYRIUPDOSTIN_END] = {
	"varchar(64) COLLATE utf8_general_ci NOT NULL",
	"int(10) COMMENT '风控状态'",
};