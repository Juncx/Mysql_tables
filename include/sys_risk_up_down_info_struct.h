#pragma once

enum SYS_RISK_UP_DOWN_INFO_TABLE_DESC : int {
	E_UPDOWNID = 0,
	E_OPTIONTYPE,
	E_PRODUCTID,
	E_RATE,
	E_ORDERLIMIT,
	E_DEALMETHOD,
	E_END
};

const char* const SYS_RISK_UP_DOWN_INFO_TABLE = "sys_risk_up_down_info";

const char* const SYS_RISK_UP_DOWN_INFO_TABLE_COLS[E_END] = {
	"upDownID",
	"optionType",
	"productID",
	"rate",
	"orderLimit",
	"dealMethod",
};

const char* const SYS_RISK_UP_DOWN_INFO_TABLE_COLS_ATTR[E_END] = {
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '涨跌幅风控ID'",
	"tinyint(1) DEFAULT '1' NOT NULL COMMENT '涨跌类型： 1表示涨跌幅'",
	"varchar(64) COLLATE utf8_bin COMMENT '品种ID(扩展使用)'",
	"decimal(16,8) DEFAULT '0.00000000' NOT NULL COMMENT '涨跌幅百分比， 例如10.3%， 填写10.3'",
	"tinyint(1) NOT NULL COMMENT '是否禁止开仓 0允许开仓 1禁止开仓 2禁止开反向仓 3禁止平仓'",
	"tinyint(1) NOT NULL COMMENT '仓位调整 0不调整，1全部清仓，2清反向仓'",
};