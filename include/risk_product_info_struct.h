#pragma once

enum RISK_PRODUCT_INFO_TABLE_DESC : int {
	E_RIPRIN_RISKID = 0,
	E_RIPRIN_RISKMODULEID,
	E_RIPRIN_PRODUCTID,
	E_RIPRIN_MAXOPENCNT,
	E_RIPRIN_MAXNETPOSITIONCNT,
	E_RIPRIN_MAXTOTALPOSITIONCNT,
	E_RIPRIN_END
};

const char* const RISK_PRODUCT_INFO_TABLE = "risk_product_info";

const char* const RISK_PRODUCT_INFO_TABLE_COLS[E_RIPRIN_END] = {
	"riskID",
	"riskModuleID",
	"productID",
	"maxOpenCnt",
	"maxNetPositionCnt",
	"maxTotalPositionCnt",
};

const char* const RISK_PRODUCT_INFO_TABLE_COLS_ATTR[E_RIPRIN_END] = {
	"varchar(64) COLLATE utf8_general_ci NOT NULL COMMENT '交易品种数量风控ID'",
	"varchar(64) COLLATE utf8_general_ci NOT NULL COMMENT '风控模板 ID'",
	"varchar(64) COLLATE utf8_general_ci NOT NULL COMMENT '品种ID'",
	"int(4) NOT NULL COMMENT '单笔最大下单手数'",
	"int(4) NOT NULL COMMENT '最大净持仓手数'",
	"int(4) NOT NULL COMMENT '最大总持仓手数'",
};