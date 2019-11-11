#pragma once

enum INSTITUTION_MODULE_INFO_TABLE_DESC : int {
	E_INMOIN_FEEMODULEID = 0,
	E_INMOIN_FEEMODULENAME,
	E_INMOIN_INSTITUTIONID,
	E_INMOIN_MONITORID,
	E_INMOIN_MANANGERID,
	E_INMOIN_END
};

const char* const INSTITUTION_MODULE_INFO_TABLE = "institution_module_info";

const char* const INSTITUTION_MODULE_INFO_TABLE_COLS[E_INMOIN_END] = {
	"feeModuleID",
	"feeModuleName",
	"institutionID",
	"monitorID",
	"manangerID",
};

const char* const INSTITUTION_MODULE_INFO_TABLE_COLS_ATTR[E_INMOIN_END] = {
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '代理手续费模板ID(主键）'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '代理手续费模板名称'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '所属机构ID'",
	"varchar(64) COLLATE utf8_bin COMMENT '风控员ID (扩展使用)'",
	"varchar(64) COLLATE utf8_bin COMMENT '管理员ID (扩展使用)'",
};