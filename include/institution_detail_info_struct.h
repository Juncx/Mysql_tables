#pragma once

enum INSTITUTION_DETAIL_INFO_TABLE_DESC : int {
	E_FEEID = 0,
	E_FEEMODULEID,
	E_PRODUCTID,
	E_CLOSEFEE,
	E_CLOSETODAYFEE,
	E_OPENFEE,
	E_FEETYPE,
	E_END
};

const char* const INSTITUTION_DETAIL_INFO_TABLE = "institution_detail_info";

const char* const INSTITUTION_DETAIL_INFO_TABLE_COLS[E_END] = {
	"feeID",
	"feeModuleID",
	"productID",
	"closeFee",
	"closeTodayFee",
	"openFee",
	"feeType",
};

const char* const INSTITUTION_DETAIL_INFO_TABLE_COLS_ATTR[E_END] = {
	"varchar(64) COLLATE utf8_general_ci NOT NULL COMMENT '代理手续费ID(主键)'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '代理手续费模板ID'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '品种ID'",
	"decimal(16,8) DEFAULT '0.00000000' NOT NULL COMMENT '平仓手续费'",
	"decimal(16,8) DEFAULT '0.00000000' NOT NULL COMMENT '平今仓手续费, 内盘上期所'",
	"decimal(16,8) DEFAULT '0.00000000' NOT NULL COMMENT '开仓手续费'",
	"tinyint(1) NOT NULL COMMENT '手续费收取类型，0按比例，1按固定值'",
};