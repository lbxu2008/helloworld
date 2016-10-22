/******************************************************************************
  �� �� ��:  ZTBT_interface.c
  ��������:  ZT8120 WIFI�ӿ�API����ʵ�֡�
  �޸ļ�¼:  V1.00.00  Billy  2013/01/20  ��һ�α�д		
  			 V1.01.00  Billy  2013/01/28  ���������������AP�ȵ�ʱ�ı���ű���
  			    		 ȥ��PSK�
  			 V1.02.00  liuyuanyuan 2014/12/24 �ڶ��α�д
  			 V1.03.00  lyc 2015/06/01 ��ֲwifi�ӿڵ�8210eƽ̨���޸���Ӧ���ļ�·��������źŶ�ȡ�ӿ�
  			 V1.03.01  lyc 2015/07/08 1���Ƴ��ظ��ȵ㣬
						  2��init���������iwlist iwconfigִ������
						  3���޸�����wpa_support ��ӵ����ţ�����ʶ��ո��ȵ�����
						  4�����ӳ�ʱʱ���޸�Ϊ30�� 
  			 V1.03.02  lyc 2015/07/18 �޸�wifi�ӿڣ�����wep���ܷ�ʽ��֧�ֵ�����
  			 V1.03.03  lyc 2015/07/18 �Ż��ź�ǿ�Ƚӿ�,
			 						  wep ��Կ��ʽ�������볤���жϣ�
									  ������ܷ�ʽ�Ǳ��������⣻
  			 V1.03.04  lyc 2015/08/13 �Ż��ź�ǿ�Ƚӿ�,
  			 V1.03.05  lyc 2015/08/13 �Ż��ź�ǿ�Ƚӿڣ�����û����wifi ����wifi״̬�������ʬ��������
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
	char macaddr[20];						//�����MAC��ַ
	int signal;
}ZTBTDEV;

int ztbt_open();
int ztbt_close();
int ztbt_scan(ZTBTDEV * ztbt,int to);

#endif  //_ZTBT_INTERFACE_H__
