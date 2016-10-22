/******************************************************************************
  文 件 名:  ZTBT_interface.c
  功能描述:  ZT8120 WIFI接口API函数实现。
  修改记录:  V1.00.00  Billy  2013/01/20  第一次编写		
  			 V1.01.00  Billy  2013/01/28  修正接入无密码的AP热点时的保存脚本，
  			    		 去掉PSK项。
  			 V1.02.00  liuyuanyuan 2014/12/24 第二次编写
  			 V1.03.00  lyc 2015/06/01 移植wifi接口道8210e平台，修改相应的文件路径，添加信号读取接口
  			 V1.03.01  lyc 2015/07/08 1、移除重复热点，
						  2、init函数中添加iwlist iwconfig执行命令
						  3、修改命令wpa_support 添加单引号，处理不识别空格热点问题
						  4、连接超时时间修改为30秒 
  			 V1.03.02  lyc 2015/07/18 修改wifi接口，处理wep加密方式不支持的问题
  			 V1.03.03  lyc 2015/07/18 优化信号强度接口,
			 						  wep 密钥格式根据密码长度判断，
									  处理加密方式是被错误问题；
  			 V1.03.04  lyc 2015/08/13 优化信号强度接口,
  			 V1.03.05  lyc 2015/08/13 优化信号强度接口，处理没连接wifi 调用wifi状态会产生僵尸进程问题
  Copyright (C), 2001-2008, Shenzhen Zhengtong Electronics Co.LTD
******************************************************************************/
#ifndef __ZTBT_INTERFACE_H__
#define __ZTBT_INTERFACE_H__

#define ZTRET_BT_VERSION 		   	"V1.03.05"
#define ZTRET_BT_UDHCPC_FAIL	   	1
#define ZTRET_BT_SUCCESS         	0
#define ZTRET_BT_ERROR           	-200
#define ZTRET_BT_ERR_TIMEOUT	   	-201
#define ZTRET_BT_MALLOC_FAIL	  	-202
#define ZTRET_BT_OPEN_FAIL		-203
#define ZTRET_BT_DUP2_FAIL		-204
#define ZTRET_BT_CREAT_PROC_FAIL  -205

typedef struct
{
	char macaddr[20];						//接入点MAC地址
	int signal;
}ZTBTDEV;

int ztbt_open();
int ztbt_close();
int ztbt_scan(ZTBTDEV * ztbt,int to);

#endif  //_ZTBT_INTERFACE_H__
