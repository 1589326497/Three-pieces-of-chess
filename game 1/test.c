/*
	������ 2022��3��24�����
*/

#include"test.h"
void menu()
{
	printf("*******************\n");
	printf("******1.����Ϸ*****\n");
	printf("******0.�˳���Ϸ***\n");
	printf("*******************\n");
}
char ret = 0;
void game()
{
	char board[row][col];
	IntiBoard(board, row, col);//��ʼ������
	Display(board, row, col);//��������
	//����� 
	playermove(board, row, col);
	Display(board, row, col);
	ret = IsWin(board, row, col);
	if (ret != 'c')
		return;
	//������
	computer(board, row, col);
	Display(board, row, col);
	char ret = IsWin(board, row, col);
	if (ret != 'c')
		return;

	if (ret == '*')
	{
		printf("���Ӯ\n");
		Display(board, row, col);
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
		Display(board, row, col);
	}
	else(ret == 'Q');
	{
		printf("ƽ��\n");
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
		printf("��ѡ��");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
		    break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}