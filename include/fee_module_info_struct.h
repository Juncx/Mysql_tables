#pragma once

enum FEE_MODULE_INFO_TABLE_DESC : int {
	E_FEEMODULEID = 0,
	E_FEEMODULENAME,
	E_INSTITUTIONID,
	E_MONITORID,
	E_MANANGERID,
	E_END
};

const char* const FEE_MODULE_INFO_TABLE = "fee_module_info";

const char* const FEE_MODULE_INFO_TABLE_COLS[E_END] = {
	"feeModuleID",
	"feeModuleName",
	"institutionID",
	"monitorID",
	"manangerID",
};

const char* const FEE_MODULE_INFO_TABLE_COLS_ATTR[E_END] = {
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '手续费模板ID'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '手续费模板名称'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '所属机构ID'",
	"varchar(64) COLLATE utf8_bin COMMENT '风控员ID (扩展使用)'",
	"varchar(64) COLLATE utf8_bin COMMENT '管理员ID (扩展使用)'",
};