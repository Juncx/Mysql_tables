#pragma once

enum RISK_OVER_NIGHT_INFO_TABLE_DESC : int {
	E_RIOVNIIN_RISKID = 0,
	E_RIOVNIIN_RISKMODULEID,
	E_RIOVNIIN_PRODUCTID,
	E_RIOVNIIN_CHECKTIME,
	E_RIOVNIIN_RISKDEGREE,
	E_RIOVNIIN_END
};

const char* const RISK_OVER_NIGHT_INFO_TABLE = "risk_over_night_info";

const char* const RISK_OVER_NIGHT_INFO_TABLE_COLS[E_RIOVNIIN_END] = {
	"riskID",
	"riskModuleID",
	"productID",
	"checkTime",
	"riskDegree",
};

const char* const RISK_OVER_NIGHT_INFO_TABLE_COLS_ATTR[E_RIOVNIIN_END] = {
	"varchar(64) COLLATE utf8_general_ci NOT NULL COMMENT '隔夜强平风控ID'",
	"varchar(64) COLLATE utf8_general_ci NOT NULL COMMENT '风控模板ID'",
	"varchar(64) COLLATE utf8_general_ci NOT NULL COMMENT '品种ID'",
	"int(10) DEFAULT '-1' NOT NULL COMMENT '强平时间   默认-1表示不设置时间段(此处不默认0的原因：与夜里0点区分开）'",
	"decimal(24,8) DEFAULT '0.00000000' NOT NULL COMMENT '劣后风险度'",
};