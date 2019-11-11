#pragma once

enum FEE_DETAIL_INFO_TABLE_DESC : int {
	E_FEDEIN_FEEID = 0,
	E_FEDEIN_FEEMODULEID,
	E_FEDEIN_PRODUCTID,
	E_FEDEIN_CLOSEFEE,
	E_FEDEIN_CLOSETODAYFEE,
	E_FEDEIN_OPENFEE,
	E_FEDEIN_FEETYPE,
	E_FEDEIN_END
};

const char* const FEE_DETAIL_INFO_TABLE = "fee_detail_info";

const char* const FEE_DETAIL_INFO_TABLE_COLS[E_FEDEIN_END] = {
	"feeID",
	"feeModuleID",
	"productID",
	"closeFee",
	"closeTodayFee",
	"openFee",
	"feeType",
};

const char* const FEE_DETAIL_INFO_TABLE_COLS_ATTR[E_FEDEIN_END] = {
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '手续费ID(主键)'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '手续费模板ID'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '品种ID'",
	"decimal(16,8) DEFAULT '0.00000000' NOT NULL COMMENT '平仓手续费'",
	"decimal(16,8) DEFAULT '0.00000000' NOT NULL COMMENT '平今仓手续费, 内盘上期所'",
	"decimal(16,8) DEFAULT '0.00000000' NOT NULL COMMENT '开仓手续费'",
	"tinyint(1) NOT NULL COMMENT '手续费收取类型，0按比例，1按固定值'",
};