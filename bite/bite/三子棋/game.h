#pragma once
#pragma warning(disable : 4996)
#include<stdio.h>
#include<stdlib.h>
#define COL 3
#define BO 3
void youxijiemian(void);
//初始化棋盘
void css(char n[COL][BO]);
//创造与打印棋盘
void cas(char n[COL][BO]);
//玩家输入
void cbs(char n[COL][BO]);
//电脑输出
void ccs(char n[COL][BO]);
//总组成
void cds(char n[COL][BO]);
//判断输赢
int ces(char n[COL][BO]);