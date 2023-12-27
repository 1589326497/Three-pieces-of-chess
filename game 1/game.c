#include"test.h"
void IntiBoard(char board[row][col], int ROW, int COL)//��ʼ������
{
	int j = 0;
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			board[i][j] = ' ';
		}
	}

}
void Display(char board[row][col], int ROW, int COL)//��������
{
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		int j = 0;
		for (j = 0; j < COL; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < COL - 1)
			{
				printf("|");
			}
		}
		printf("\n");//��ӡ  |
		if (i < ROW - 1)
		{
			for (j = 0; j < COL; j++)
			{
				printf("---");
				if (j < COL - 1)
					printf("|");
			}
			printf("\n");//��ӡ---|
		}
	}
}
void playermove(char board[row][col], int ROW, int COL)//�����
{
	int x = 0;
	int y = 0;
	printf("�����\n");
	while (1)
	{
		printf("����������");
		scanf_s("%d %d", &x, &y);
		if (x >= 1 && x < ROW && y >= 1 && y < COL)
		{
			if (board[ROW - 1][COL - 1] == ' ')
			{
				board[ROW - 1][COL - 1] = '*';
				break;
			}
			else
			{
				printf("�˴��Ա�ռ�ã�����������");
			}
		}
		else
		{
			printf("�����������������\n");
		}
	}
}

void computer(char board[row][col], int ROW, int COL)
{
	printf("�����ߣ�");
	while (1)
	{
		int x = rand() % ROW;
		int y = rand() % COL;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
int isfull(char board[row][col], int ROW, int COL)
{
	int i = 0;
    int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char iswin(char board[row][col], int ROW, int COL)
{
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (i = 0; i < COL; i++)
	{
		if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != ' ')
	{
		return board[0][2];
	}
	int ret = isfull(board, ROW, COL);
	if (ret == 1)
	{
		return 'Q';
	}
	return 'C';
}