#pragma once

enum RISK_FORCE_CLOSE_TIME_INFO_TABLE_DESC : int {
	E_RISKID = 0,
	E_RISKMODULEID,
	E_PRODUCTID,
	E_FORCETIME1,
	E_FORCETIME2,
	E_RISKSTATUS,
	E_END
};

const char* const RISK_FORCE_CLOSE_TIME_INFO_TABLE = "risk_force_close_time_info";

const char* const RISK_FORCE_CLOSE_TIME_INFO_TABLE_COLS[E_END] = {
	"riskID",
	"riskModuleID",
	"productID",
	"forceTime1",
	"forceTime2",
	"riskStatus",
};

const char* const RISK_FORCE_CLOSE_TIME_INFO_TABLE_COLS_ATTR[E_END] = {
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '定时强平风控ID'",
	"varchar(64) COLLATE utf8_general_ci NOT NULL COMMENT '风控模板ID'",
	"varchar(64) COLLATE utf8_general_ci NOT NULL COMMENT '品种ID'",
	"int(10) DEFAULT '-1' COMMENT '强平时间段1    默认-1表示不设置时间段(此处不默认0的原因：与夜里0点区分开）'",
	"int(10) DEFAULT '-1' COMMENT '强平时间段2  默认-1表示不设置时间段(此处不默认0的原因：与夜里0点区分开）'",
	"int(10) DEFAULT '0' NOT NULL COMMENT '风控状态    注： 默认0 表示未触发风控可正常交易的状态'",
};