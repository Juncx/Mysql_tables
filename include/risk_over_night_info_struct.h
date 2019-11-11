#pragma once

enum RISK_OVER_NIGHT_INFO_TABLE_DESC : int {
	E_RISKID = 0,
	E_RISKMODULEID,
	E_PRODUCTID,
	E_CHECKTIME,
	E_RISKDEGREE,
	E_END
};

const char* const RISK_OVER_NIGHT_INFO_TABLE = "risk_over_night_info";

const char* const RISK_OVER_NIGHT_INFO_TABLE_COLS[E_END] = {
	"riskID",
	"riskModuleID",
	"productID",
	"checkTime",
	"riskDegree",
};

const char* const RISK_OVER_NIGHT_INFO_TABLE_COLS_ATTR[E_END] = {
	"varchar(64) COLLATE utf8_general_ci NOT NULL COMMENT '隔夜强平风控ID'",
	"varchar(64) COLLATE utf8_general_ci NOT NULL COMMENT '风控模板ID'",
	"varchar(64) COLLATE utf8_general_ci NOT NULL COMMENT '品种ID'",
	"int(10) DEFAULT '-1' NOT NULL COMMENT '强平时间   默认-1表示不设置时间段(此处不默认0的原因：与夜里0点区分开）'",
	"decimal(24,8) DEFAULT '0.00000000' NOT NULL COMMENT '劣后风险度'",
};