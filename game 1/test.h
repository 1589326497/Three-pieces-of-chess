#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS 1
#define row 3
#define col 3
void IntiBoard(char board[row][col], int ROW, int COL);// ��ʼ������
void Display(char board[row][col], int ROW, int COL);//��ӡ����
void playermove(char board[row][col], int ROW, int COL);//�����
void computer(char board[row][col], int ROW, int COL);//������
//���Ӯ*
//����Ӯ#
//ƽ��Q
//��Ϸ����C
char IsWin(char board[row][col], int ROW, int COL);//�ж�
