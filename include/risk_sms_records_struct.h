#pragma once

enum RISK_SMS_RECORDS_TABLE_DESC : int {
	E_ID = 0,
	E_PHONENO,
	E_USERID,
	E_SMSMSG,
	E_CONTRACTCODE,
	E_PRODUCTCODE,
	E_FIRSTTYPE,
	E_SECONDTYPE,
	E_NUMTIMES,
	E_NOTIFYFLAG,
	E_DATETIME,
	E_END
};

const char* const RISK_SMS_RECORDS_TABLE = "risk_sms_records";

const char* const RISK_SMS_RECORDS_TABLE_COLS[E_END] = {
	"id",
	"phoneNo",
	"userID",
	"smsMsg",
	"contractCode",
	"productCode",
	"firstType",
	"secondType",
	"numTimes",
	"notifyFlag",
	"dateTime",
};

const char* const RISK_SMS_RECORDS_TABLE_COLS_ATTR[E_END] = {
	"int(10) unsigned NOT NULL",
	"varchar(12) COLLATE utf8_general_ci NOT NULL COMMENT '手机号'",
	"varchar(32) COLLATE utf8_general_ci NOT NULL COMMENT '用户ID'",
	"varchar(128) COLLATE utf8_general_ci COMMENT '短信内容'",
	"varchar(32) COLLATE utf8_general_ci COMMENT '合约'",
	"varchar(32) COLLATE utf8_general_ci COMMENT '品种'",
	"tinyint(4) COMMENT '风控类型：1行情涨跌幅，2品种定时强平，3品种隔夜强平，4按自有资金基础风控, 5按劣后资金风控，6按优先资金风控，7按风险度风控，8按当日亏损风控，9按动态权益风控'",
	"tinyint(4) COMMENT '触发类型：1 警告线, 2禁开线，3 强平线'",
	"tinyint(4) DEFAULT '0' COMMENT '短信发送的次数（同一类型）'",
	"tinyint(2) DEFAULT '0' COMMENT '是否已发送通知：默认0未发送，1已发送'",
	"timestamp DEFAULT 'CURRENT_TIMESTAMP'",
};