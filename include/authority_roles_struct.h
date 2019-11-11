#pragma once

enum AUTHORITY_ROLES_TABLE_DESC : int {
	E_AURO_ROLESID = 0,
	E_AURO_ROLESNAME,
	E_AURO_USERID,
	E_AURO_CREATEDATE,
	E_AURO_CREATETIME,
	E_AURO_ROLESTYPE,
	E_AURO_AUTHORITYTYPE,
	E_AURO_END
};

const char* const AUTHORITY_ROLES_TABLE = "authority_roles";

const char* const AUTHORITY_ROLES_TABLE_COLS[E_AURO_END] = {
	"rolesID",
	"rolesName",
	"userID",
	"createDate",
	"createTime",
	"rolesType",
	"authorityType",
};

const char* const AUTHORITY_ROLES_TABLE_COLS_ATTR[E_AURO_END] = {
	"varchar(64) COLLATE latin1_swedish_ci NOT NULL COMMENT '角色ID'",
	"varchar(24) COLLATE utf8_general_ci NOT NULL COMMENT '角色名称'",
	"varchar(64) COLLATE latin1_swedish_ci NOT NULL COMMENT '创建该角色的用户ID'",
	"int(20) NOT NULL COMMENT '角色创建日期'",
	"int(10) NOT NULL COMMENT '角色创建时间'",
	"tinyint(2) NOT NULL COMMENT '角色类型(0内置 1增删改)，内置类型不可以修改删除，新增类型，可以修改删除'",
	"tinyint(2) NOT NULL COMMENT '模板类型 1、机构 2、管理员 3、风控员'",
};