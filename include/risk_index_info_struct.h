#pragma once

enum RISK_INDEX_INFO_TABLE_DESC : int {
	E_RIININ_RISKID = 0,
	E_RIININ_RISKMODULEID,
	E_RIININ_INDEXTYPE,
	E_RIININ_WARNING,
	E_RIININ_CLOSE,
	E_RIININ_FORBIDENOPEN,
	E_RIININ_END
};

const char* const RISK_INDEX_INFO_TABLE = "risk_index_info";

const char* const RISK_INDEX_INFO_TABLE_COLS[E_RIININ_END] = {
	"riskID",
	"riskModuleID",
	"indexType",
	"warning",
	"close",
	"forbidenOpen",
};

const char* const RISK_INDEX_INFO_TABLE_COLS_ATTR[E_RIININ_END] = {
	"varchar(64) COLLATE utf8_general_ci NOT NULL COMMENT '资金风控ID(主键)'",
	"varchar(64) COLLATE utf8_general_ci NOT NULL COMMENT '风控模板ID'",
	"tinyint(2) DEFAULT '0' NOT NULL COMMENT '指标类型：1按优先资金百分比，2按劣后资金百分比，3按风险度百分比，4按当日亏损绝对值，5按动态权益绝对值'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '预警线  例如按百分比，10.3%， 填写10.3；按固定值100000美元，直接填100000.000000000美元'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '强平线  例如按百分比，10.3%， 填写10.3；按固定值100000美元，直接填100000.000000000美元'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '禁开线   例如按百分比，10.3%， 填写10.3；按固定值100000美元，直接填100000.000000000美元'",
};