#pragma once

enum INSTITUTION_MODULE_INFO_TABLE_DESC : int {
	E_FEEMODULEID = 0,
	E_FEEMODULENAME,
	E_INSTITUTIONID,
	E_MONITORID,
	E_MANANGERID,
	E_END
};

const char* const INSTITUTION_MODULE_INFO_TABLE = "institution_module_info";

const char* const INSTITUTION_MODULE_INFO_TABLE_COLS[E_END] = {
	"feeModuleID",
	"feeModuleName",
	"institutionID",
	"monitorID",
	"manangerID",
};

const char* const INSTITUTION_MODULE_INFO_TABLE_COLS_ATTR[E_END] = {
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '代理手续费模板ID(主键）'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '代理手续费模板名称'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '所属机构ID'",
	"varchar(64) COLLATE utf8_bin COMMENT '风控员ID (扩展使用)'",
	"varchar(64) COLLATE utf8_bin COMMENT '管理员ID (扩展使用)'",
};