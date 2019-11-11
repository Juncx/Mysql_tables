#pragma once

enum INSTITUTION_COMMISSION_RECORD_TABLE_DESC : int {
	E_INCORE_RECORDID = 0,
	E_INCORE_TRADEID,
	E_INCORE_INSTITUTIONID,
	E_INCORE_LOGINNAME,
	E_INCORE_CONTRACTCODE,
	E_INCORE_DIRECTION,
	E_INCORE_OPENOFFSET,
	E_INCORE_TRADEVOLUME,
	E_INCORE_CHANGETYPE,
	E_INCORE_COMMISSIONCHANGE,
	E_INCORE_TRADEDATE,
	E_INCORE_CREATEDATE,
	E_INCORE_TRADETIME,
	E_INCORE_CREATETIME,
	E_INCORE_NOTE,
	E_INCORE_FEE,
	E_INCORE_END
};

const char* const INSTITUTION_COMMISSION_RECORD_TABLE = "institution_commission_record";

const char* const INSTITUTION_COMMISSION_RECORD_TABLE_COLS[E_INCORE_END] = {
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

const char* const INSTITUTION_COMMISSION_RECORD_TABLE_COLS_ATTR[E_INCORE_END] = {
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