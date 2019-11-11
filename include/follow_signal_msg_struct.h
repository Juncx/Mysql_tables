#pragma once

enum FOLLOW_SIGNAL_MSG_TABLE_DESC : int {
	E_ID = 0,
	E_TRADEID,
	E_ORDERID,
	E_POSITIONID,
	E_USERID,
	E_LOGINNAME,
	E_CONTRACTCODE,
	E_CONTRACTNAME,
	E_DIRECTION,
	E_VOLUME,
	E_TRADEPRICE,
	E_PRICETYPE,
	E_OPENOFFSET,
	E_TURNOVER,
	E_GENERATEDATE,
	E_GENERATETIME,
	E_HANDLEFLAG,
	E_HANDLECOUNT,
	E_END
};

const char* const FOLLOW_SIGNAL_MSG_TABLE = "follow_signal_msg";

const char* const FOLLOW_SIGNAL_MSG_TABLE_COLS[E_END] = {
	"id",
	"tradeID",
	"orderID",
	"positionID",
	"userID",
	"loginName",
	"contractCode",
	"contractName",
	"direction",
	"volume",
	"tradePrice",
	"priceType",
	"openOffset",
	"turnOver",
	"generateDate",
	"generateTime",
	"handleFlag",
	"handleCount",
};

const char* const FOLLOW_SIGNAL_MSG_TABLE_COLS_ATTR[E_END] = {
	"int(11) NOT NULL",
	"varchar(64) COLLATE utf8_bin NOT NULL",
	"varchar(64) DEFAULT '0' COLLATE utf8_bin NOT NULL COMMENT '委托ID, 作成交信息时使用'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '平仓对应的持仓ID'",
	"varchar(64) DEFAULT '0' COLLATE utf8_bin NOT NULL COMMENT '帐户标识（用户ID)， 系统内部使用'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '帐户名'",
	"varchar(64) DEFAULT '0' COLLATE utf8_bin NOT NULL COMMENT '合约ID'",
	"varchar(16) COLLATE utf8_bin NOT NULL COMMENT '合约名'",
	"char(2) DEFAULT '0' COLLATE utf8_bin NOT NULL COMMENT '买卖方向，  \"B\" (buy)表示买， \"S\" (sell)表示卖'",
	"int(10) DEFAULT '0' NOT NULL COMMENT '成交手数'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '成交价格'",
	"char(2) COLLATE utf8_bin NOT NULL COMMENT '价格类型 M市价，L限价'",
	"smallint(2) DEFAULT '0' NOT NULL COMMENT '开平标志，  1 表示开仓， 2 表示平仓， 3 表示平今'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '成交额'",
	"int(10) DEFAULT '0' NOT NULL COMMENT '成交日期'",
	"int(10) DEFAULT '0' NOT NULL COMMENT '成交时间'",
	"smallint(2) DEFAULT '-1' NOT NULL COMMENT '处理标志 -1 默认 0 成功  1 失败'",
	"smallint(2) DEFAULT '0' NOT NULL COMMENT '处理次数 默认 0'",
};