#pragma once

enum USERS_TABLE_DESC : int {
	E_US_USERID = 0,
	E_US_USERTYPE,
	E_US_LEVEL,
	E_US_LOGINNAME,
	E_US_ACCOUNTNAME,
	E_US_PASSWORD,
	E_US_PHONE,
	E_US_POULARIZELINK,
	E_US_ADDRESS,
	E_US_ISLOGICDEL,
	E_US_REGISTERDATE,
	E_US_REGISTERTIME,
	E_US_MAINIDNUM,
	E_US_SUBIDNUM,
	E_US_COUNTERTYPE,
	E_US_ALLOTYPE,
	E_US_VALIDENDDATE,
	E_US_VALIDENDTIME,
	E_US_END
};

const char* const USERS_TABLE = "users";

const char* const USERS_TABLE_COLS[E_US_END] = {
	"userID",
	"userType",
	"level",
	"loginName",
	"accountName",
	"password",
	"phone",
	"poularizeLink",
	"address",
	"isLogicDel",
	"registerDate",
	"registerTime",
	"mainIDNum",
	"subIDNum",
	"counterType",
	"alloType",
	"validEndDate",
	"validEndTime",
};

const char* const USERS_TABLE_COLS_ATTR[E_US_END] = {
	"varchar(64) COLLATE utf8_bin NOT NULL",
	"tinyint(1) NOT NULL COMMENT '1交易员，2风控员，3管理员，4机构，5资金账户'",
	"tinyint(1) NOT NULL COMMENT '所属机构的层级，super1，一级代理2，二级代理3，...'",
	"varchar(32) COLLATE utf8_bin NOT NULL",
	"varchar(32) COLLATE utf8_bin NOT NULL",
	"varchar(64) COLLATE utf8_bin NOT NULL",
	"char(16) COLLATE utf8_bin NOT NULL",
	"char(6) COLLATE utf8_bin NOT NULL",
	"varchar(128) COLLATE utf8_bin NOT NULL",
	"tinyint(1) NOT NULL COMMENT '是否逻辑删除0正常，1删除'",
	"int(10) NOT NULL",
	"int(10) NOT NULL",
	"int(10) NOT NULL COMMENT '主账户个数'",
	"int(10) NOT NULL COMMENT '子账户个数'",
	"int(2) NOT NULL COMMENT '柜台类型 ctp1，esunny2， ib3，sp4，sub5，cms6，zd7'",
	"int(2) DEFAULT '-1' COMMENT ' 配资类型  0 \"按月配资\"、1 \"按天配资\"、2 \"免息配资\"、3 \"免费体验\"'",
	"int(10) DEFAULT '-1' COMMENT '账户有效截止日期'",
	"int(10) DEFAULT '-1' COMMENT '账户有效截止时间'",
};