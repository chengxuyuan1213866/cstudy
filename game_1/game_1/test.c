#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"
void menu() {
	printf("**********************************************************\n");
	printf("*****************     1.play      ************************\n");
	printf("*****************     0.exit      ************************\n");
	printf("**********************************************************\n");

}

void game()
{
	//初始化棋盘
	char board[ROW][COL] = { 0 };
	//初始化棋盘 - 初始化空格
	InitBoard(board, ROW, COL);
	//打印棋盘  --  打印数组的内存
	DisplayBoard(board, ROW, COL);
	//获取游戏状态
	char ret = 0;

	while (1)
	{
		//玩家走
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret!='C')
		{
			break;
		}
		
		//电脑走
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家获胜\n");

	}
	else if (ret == '#')
	{
		printf("电脑获胜\n");
	}
	else
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);


}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}











