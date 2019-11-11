#pragma once

enum CONDITION_ORDERS_TABLE_DESC : int {
	E_COOR_CONDITIONORDERID = 0,
	E_COOR_USERID,
	E_COOR_CONTRACTID,
	E_COOR_CONDITIONTYPE,
	E_COOR_TRIGGERPRICETYPE,
	E_COOR_TRIGGERCONDITION,
	E_COOR_TRIGGERPRICE,
	E_COOR_TRIGGERTIME,
	E_COOR_TIMECONDITIONTYPE,
	E_COOR_ORDERTYPE,
	E_COOR_ORDERPRICE,
	E_COOR_DIRECTION,
	E_COOR_OPENOFFSET,
	E_COOR_VOLUME,
	E_COOR_STATE,
	E_COOR_ORDERFROM,
	E_COOR_CREATEDATE,
	E_COOR_CREATETIME,
	E_COOR_UPDATEDATE,
	E_COOR_UPDATETIME,
	E_COOR_IP,
	E_COOR_MAC,
	E_COOR_ORDERID,
	E_COOR_TRIGGERCONTIME,
	E_COOR_TRIGGERCONDATE,
	E_COOR_TRIGGERDATE,
	E_COOR_END
};

const char* const CONDITION_ORDERS_TABLE = "condition_orders";

const char* const CONDITION_ORDERS_TABLE_COLS[E_COOR_END] = {
	"conditionOrderID",
	"userID",
	"contractID",
	"conditionType",
	"triggerPriceType",
	"triggerCondition",
	"triggerPrice",
	"triggerTime",
	"timeConditionType",
	"orderType",
	"orderPrice",
	"direction",
	"openOffset",
	"volume",
	"state",
	"orderFrom",
	"createDate",
	"createTime",
	"updateDate",
	"updateTime",
	"ip",
	"mac",
	"orderID",
	"triggerConTime",
	"triggerConDate",
	"triggerDate",
};

const char* const CONDITION_ORDERS_TABLE_COLS_ATTR[E_COOR_END] = {
	"varchar(64) COLLATE latin1_swedish_ci NOT NULL",
	"varchar(64) COLLATE latin1_swedish_ci NOT NULL",
	"varchar(64) COLLATE latin1_swedish_ci NOT NULL",
	"tinyint(2) NOT NULL COMMENT '条件单类型：0、价格 1.时间 2.时间价格'",
	"tinyint(2) NOT NULL COMMENT '触发价格类型：1最新价，2买一价，3卖一价'",
	"tinyint(2) NOT NULL COMMENT '触发条件：1>=  2<='",
	"decimal(16,8) DEFAULT '0.00000000' NOT NULL",
	"int(10) NOT NULL COMMENT '触发时间'",
	"tinyint(2) NOT NULL COMMENT '时间有效类型，0当日有效，1交割日前有效'",
	"tinyint(2) NOT NULL COMMENT '下单类型：1指定价（下单限价）2对手价（下单限价）3市价（下单市价）'",
	"decimal(16,8) DEFAULT '0.00000000' NOT NULL",
	"char(2) COLLATE latin1_swedish_ci NOT NULL COMMENT '买卖方向，  \"B\" (buy)表示买， \"S\" (sell)表示卖'",
	"tinyint(2) NOT NULL COMMENT '开平标志，  1 表示开仓， 2 表示平仓， 3 表示平今'",
	"int(4) NOT NULL",
	"tinyint(2) DEFAULT '0' NOT NULL COMMENT '止盈止损单状态：0 新建（工作中）1已触发（已发委托）2失败 3删除'",
	"tinyint(2) DEFAULT '0' NOT NULL COMMENT '下单来源'",
	"int(10) NOT NULL",
	"int(10) NOT NULL",
	"int(10) DEFAULT '-1' NOT NULL COMMENT '更新或删除'",
	"int(10) DEFAULT '-1' NOT NULL",
	"varchar(32) COLLATE latin1_swedish_ci NOT NULL",
	"varchar(64) COLLATE latin1_swedish_ci NOT NULL",
	"varchar(64) COLLATE latin1_swedish_ci NOT NULL COMMENT '内部使用'",
	"int(10) NOT NULL COMMENT '触发条件时间'",
	"int(10) NOT NULL COMMENT '触发条件日期'",
	"int(10) NOT NULL COMMENT '触发日期'",
};