#pragma once

enum USER_RELATION_SHIP_TABLE_DESC : int {
	E_USERID = 0,
	E_INSTITUTIONID,
	E_MONITORID,
	E_MANANGERID,
	E_MAINID,
	E_MARGINMODULEID,
	E_FEEMODULEID,
	E_RISKMODULEID,
	E_AUTHRITYMODULEID,
	E_RISKMODULEAUTHRITYID,
	E_WARNING,
	E_CLOSE,
	E_FORBIDENOPEN,
	E_END
};

const char* const USER_RELATION_SHIP_TABLE = "user_relation_ship";

const char* const USER_RELATION_SHIP_TABLE_COLS[E_END] = {
	"userID",
	"institutionID",
	"monitorID",
	"manangerID",
	"mainID",
	"marginModuleID",
	"feeModuleID",
	"riskModuleID",
	"authrityModuleID",
	"riskModuleAuthrityID",
	"warning",
	"close",
	"forbidenOpen",
};

const char* const USER_RELATION_SHIP_TABLE_COLS_ATTR[E_END] = {
	"varchar(64) COLLATE utf8_bin NOT NULL",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '机构ID'",
	"varchar(64) COLLATE utf8_bin COMMENT '风控员ID (扩展使用)'",
	"varchar(64) COLLATE utf8_bin COMMENT '管理员ID (扩展使用)'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '主账户'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '保证金模板ID'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '手续费模板ID'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '风控模板ID'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '权限模板'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '机构风控模板权限'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '劣后资金指标：  预警线  例如按百分比，10.3%， 填写10.3；按固定值100000美元，直接填100000.000000000美元'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '劣后资金指标：  强平线  例如按百分比，10.3%， 填写10.3；按固定值100000美元，直接填100000.000000000美元'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '劣后资金指标：  禁开线   例如按百分比，10.3%， 填写10.3；按固定值100000美元，直接填100000.000000000美元'",
};