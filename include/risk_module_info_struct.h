#pragma once

enum RISK_MODULE_INFO_TABLE_DESC : int {
	E_RISKMODULEID = 0,
	E_RISKMODULENAME,
	E_INSTITUTIONID,
	E_MONITORID,
	E_MANANGERID,
	E_END
};

const char* const RISK_MODULE_INFO_TABLE = "risk_module_info";

const char* const RISK_MODULE_INFO_TABLE_COLS[E_END] = {
	"riskModuleID",
	"riskModuleName",
	"institutionID",
	"monitorID",
	"manangerID",
};

const char* const RISK_MODULE_INFO_TABLE_COLS_ATTR[E_END] = {
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '风控模板ID'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '风控模块名称'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '所属机构ID'",
	"varchar(64) COLLATE utf8_bin COMMENT '风控员ID (扩展使用)'",
	"varchar(64) COLLATE utf8_bin COMMENT '管理员ID (扩展使用)'",
};