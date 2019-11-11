#pragma once

enum INSTITUTION_COMMISSION_RECORD_TABLE_DESC : int {
	E_RECORDID = 0,
	E_TRADEID,
	E_INSTITUTIONID,
	E_LOGINNAME,
	E_CONTRACTCODE,
	E_DIRECTION,
	E_OPENOFFSET,
	E_TRADEVOLUME,
	E_CHANGETYPE,
	E_COMMISSIONCHANGE,
	E_TRADEDATE,
	E_CREATEDATE,
	E_TRADETIME,
	E_CREATETIME,
	E_NOTE,
	E_FEE,
	E_END
};

const char* const INSTITUTION_COMMISSION_RECORD_TABLE = "institution_commission_record";

const char* const INSTITUTION_COMMISSION_RECORD_TABLE_COLS[E_END] = {
	"recordID",
	"tradeID",
	"institutionID",
	"loginName",
	"contractCode",
	"direction",
	"openOffset",
	"tradeVolume",
	"changeType",
	"commissionChange",
	"tradeDate",
	"createDate",
	"tradeTime",
	"createTime",
	"note",
	"fee",
};

const char* const INSTITUTION_COMMISSION_RECORD_TABLE_COLS_ATTR[E_END] = {
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '记录ID'",
	"varchar(64) COLLATE utf8_bin NOT NULL",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '机构ID'",
	"varchar(64) COLLATE utf8_bin NOT NULL",
	"varchar(64) COLLATE utf8_bin NOT NULL",
	"char(2) COLLATE utf8_bin NOT NULL COMMENT '买卖方向，  \"B\" (buy)表示买， \"S\" (sell)表示卖''",
	"tinyint(2) NOT NULL COMMENT '开平标志，  1 表示开仓， 2 表示平仓， 3 表示平今'",
	"int(4) NOT NULL",
	"tinyint(1) NOT NULL COMMENT '变动类型：1、收取佣金，2、提取佣金'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '佣金变动金额'",
	"int(10) NOT NULL COMMENT '日期'",
	"int(10) NOT NULL COMMENT '日期'",
	"int(10) NOT NULL COMMENT '时间'",
	"int(10) NOT NULL COMMENT '时间'",
	"varchar(64) COLLATE utf8_bin NOT NULL COMMENT '备注，收取时可以填写tradeID'",
	"decimal(32,8) DEFAULT '0.00000000' NOT NULL COMMENT '手续费'",
};