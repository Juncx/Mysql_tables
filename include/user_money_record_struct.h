#pragma once

enum USER_MONEY_RECORD_TABLE_DESC : int {
	E_USMORE_ID = 0,
	E_USMORE_USERID,
	E_USMORE_CHANGETYPE,
	E_USMORE_MONEYCHANGE,
	E_USMORE_CHANGETIME,
	E_USMORE_CHANGEDATE,
	E_USMORE_OPERATORID,
	E_USMORE_NOTE,
	E_USMORE_END
};

const char* const USER_MONEY_RECORD_TABLE = "user_money_record";

const char* const USER_MONEY_RECORD_TABLE_COLS[E_USMORE_END] = {
	"id",
	"userID",
	"changeType",
	"moneyChange",
	"changeTime",
	"changeDate",
	"operatorID",
	"note",
};

const char* const USER_MONEY_RECORD_TABLE_COLS_ATTR[E_USMORE_END] = {
	"int(10) unsigned NOT NULL COMMENT '主键'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT 'userID'",
	"tinyint(2) NOT NULL COMMENT '资金变更类型： 1 减自有资金； 2 减配资额度； 3 红冲； 4 加自有资金 5.加配资额度 6 蓝补； 7 变易手续费； 8 平仓盈亏; 9 线上入金 10.线上出金'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '资金改变金额'",
	"int(10) NOT NULL COMMENT '改变时间'",
	"int(10) NOT NULL COMMENT '改变日期'",
	"varchar(64) COLLATE utf8_bin COMMENT '操作人'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '备注：对于成交，可以填写成交编号'",
};