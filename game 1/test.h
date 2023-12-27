#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS 1
#define row 3
#define col 3
void IntiBoard(char board[row][col], int ROW, int COL);// 初始化棋盘
void Display(char board[row][col], int ROW, int COL);//打印棋盘
void playermove(char board[row][col], int ROW, int COL);//玩家走
void computer(char board[row][col], int ROW, int COL);//电脑走
//玩家赢*
//电脑赢#
//平局Q
//游戏结束C
char IsWin(char board[row][col], int ROW, int COL);//判断
