#pragma once

enum FOLLOW_USERS_TABLE_DESC : int {
	E_USERID = 0,
	E_LOGINNAME,
	E_ACCOUNTNAME,
	E_PASSWORD,
	E_USERTYPE,
	E_LEVEL,
	E_FOLLOWFLAG,
	E_FUTURENAME,
	E_COUNTERTYPE,
	E_ISLOGICDEL,
	E_REGISTERDATE,
	E_REGISTERTIME,
	E_END
};

const char* const FOLLOW_USERS_TABLE = "follow_users";

const char* const FOLLOW_USERS_TABLE_COLS[E_END] = {
	"userID",
	"loginName",
	"accountName",
	"password",
	"userType",
	"level",
	"followFlag",
	"futureName",
	"counterType",
	"isLogicDel",
	"registerDate",
	"registerTime",
};

const char* const FOLLOW_USERS_TABLE_COLS_ATTR[E_END] = {
	"varchar(64) COLLATE utf8_general_ci NOT NULL",
	"varchar(32) COLLATE utf8_bin NOT NULL COMMENT '登录名'",
	"varchar(32) COLLATE utf8_bin NOT NULL COMMENT '账户名称'",
	"varchar(32) COLLATE utf8_bin NOT NULL COMMENT '密码'",
	"tinyint(2) NOT NULL COMMENT '账户类型，1目标账户（样本账户、被跟单账户），2跟单账户，3管理员'",
	"tinyint(2) NOT NULL COMMENT '所属机构的层级，super1，一级代理2，...'",
	"tinyint(2) DEFAULT '0' NOT NULL COMMENT '是否开启跟单-------0不开启，1开启'",
	"varchar(32) COLLATE utf8_bin NOT NULL COMMENT '期货公司名称'",
	"int(2) NOT NULL COMMENT '柜台类型 ctp1，esunny2， ib3，sp4，sub5，cms6，zd7'",
	"tinyint(1) DEFAULT '0' NOT NULL COMMENT '是否逻辑删除-------0正常，1删除'",
	"int(10) NOT NULL",
	"int(10) NOT NULL",
};