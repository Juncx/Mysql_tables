#pragma once

enum FOLLOW_ORDER_INFO_TABLE_DESC : int {
	E_FOORIN_ORDERID = 0,
	E_FOORIN_CLOSEPOSITIONID,
	E_FOORIN_USERID,
	E_FOORIN_LOGINNAME,
	E_FOORIN_CONTRACTCODE,
	E_FOORIN_CONTRACTNAME,
	E_FOORIN_DIRECTION,
	E_FOORIN_OPENOFFSET,
	E_FOORIN_PRICETYPE,
	E_FOORIN_PRICE,
	E_FOORIN_VOLUME,
	E_FOORIN_EFFECTEDVOLUME,
	E_FOORIN_ORDERREF,
	E_FOORIN_STATE,
	E_FOORIN_FAILREASON,
	E_FOORIN_FAILMSG,
	E_FOORIN_GENERATEDATE,
	E_FOORIN_GENERATETIME,
	E_FOORIN_UPDATEDATE,
	E_FOORIN_UPDATETIME,
	E_FOORIN_REALSYSTEMORDERID,
	E_FOORIN_FOLLOWDIRECT,
	E_FOORIN_MULTIPLE,
	E_FOORIN_TARGETUSERID,
	E_FOORIN_TARGETORDERID,
	E_FOORIN_TARGETTRADEID,
	E_FOORIN_TARGETPOSITIONID,
	E_FOORIN_WORDERID,
	E_FOORIN_WCLOSEPOSITIONID,
	E_FOORIN_END
};

const char* const FOLLOW_ORDER_INFO_TABLE = "follow_order_info";

const char* const FOLLOW_ORDER_INFO_TABLE_COLS[E_FOORIN_END] = {
	"orderID",
	"closePositionID",
	"userID",
	"loginName",
	"contractCode",
	"contractName",
	"direction",
	"openOffset",
	"priceType",
	"price",
	"volume",
	"effectedVolume",
	"orderRef",
	"state",
	"failReason",
	"failMsg",
	"generateDate",
	"generateTime",
	"updateDate",
	"updateTime",
	"realSystemOrderId",
	"followDirect",
	"multiple",
	"targetUserID",
	"targetOrderID",
	"targetTradeID",
	"targetPositionID",
	"wOrderID",
	"wClosePositionID",
};

const char* const FOLLOW_ORDER_INFO_TABLE_COLS_ATTR[E_FOORIN_END] = {
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT ' 委托ID'",
	"varchar(64) COLLATE utf8_bin",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '帐户标识(用户ID)， 系统内部使用'",
	"varchar(32) COLLATE utf8_bin NOT NULL",
	"varchar(16) COLLATE utf8_bin NOT NULL COMMENT '合约代码'",
	"varchar(16) COLLATE utf8_bin NOT NULL",
	"char(2) DEFAULT '0' COLLATE utf8_bin NOT NULL COMMENT '买卖方向，  \"B\" (buy)表示买， \"S\" (sell)表示卖'",
	"tinyint(2) DEFAULT '0' NOT NULL COMMENT '开平标志，  1 表示开仓， 2 表示平仓， 3 表示平今'",
	"char(2) DEFAULT '0' COLLATE utf8_bin NOT NULL COMMENT '价格类型，   \"M\"=77 (market)表示市价， \"L\"=76 (limit)表示限价'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '委托价格'",
	"int(10) DEFAULT '0' NOT NULL COMMENT '委托手数'",
	"int(10) DEFAULT '0' NOT NULL COMMENT '已生效手数'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '当委托未生效时,客户端需要唯一标示该委托,客户端生成一个唯一编码,使用该编码进行标识'",
	"tinyint(2) DEFAULT '1' NOT NULL COMMENT ' status 委托状态 1 表示委托已发送到服务器；2委托创建成功(委托已在交易交易所创建成功)；3委托全部生效；4委托部分生效，剩余部分还在委托队列中；5委托部分生效，剩余委托被用户撤销；5委托部分生效，剩余委托被系统撤销；6委托未生效，用户撤销；7委托未生效，被系统撤销。'",
	"int(10) DEFAULT '0' NOT NULL COMMENT '委托失败原因'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '失败信息'",
	"int(10) DEFAULT '0' NOT NULL COMMENT '委托创建日期'",
	"int(10) DEFAULT '0' NOT NULL COMMENT '委托创建时间'",
	"int(10) DEFAULT '0' NOT NULL COMMENT ' 委托状态最后更新日期'",
	"int(10) DEFAULT '0' NOT NULL COMMENT '委托状态最后更新时间'",
	"varchar(24) COLLATE utf8_bin NOT NULL COMMENT '实盘委托编号'",
	"tinyint(2) DEFAULT '0' NOT NULL COMMENT '跟单方向   0 表示同向，1 表示反向	'",
	"int(8) DEFAULT '1' NOT NULL COMMENT '跟单倍数'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '目标账户'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '跟单的委托ID'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '目标账户成交ID'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '目标账户的持仓ID'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '外部系统的委托ID'",
	"varchar(64) COLLATE utf8_bin",
};