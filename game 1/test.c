/*
	三字棋 2022年3月24日完成
*/

#include"test.h"
void menu()
{
	printf("*******************\n");
	printf("******1.玩游戏*****\n");
	printf("******0.退出游戏***\n");
	printf("*******************\n");
}
char ret = 0;
void game()
{
	char board[row][col];
	IntiBoard(board, row, col);//初始化棋盘
	Display(board, row, col);//建立棋盘
	//玩家走 
	playermove(board, row, col);
	Display(board, row, col);
	ret = IsWin(board, row, col);
	if (ret != 'c')
		return;
	//电脑走
	computer(board, row, col);
	Display(board, row, col);
	char ret = IsWin(board, row, col);
	if (ret != 'c')
		return;

	if (ret == '*')
	{
		printf("玩家赢\n");
		Display(board, row, col);
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
		Display(board, row, col);
	}
	else(ret == 'Q');
	{
		printf("平局\n");
		Display(board, row, col);
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{

		menu();
		printf("请选择：");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
		    break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}