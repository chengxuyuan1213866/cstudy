#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1: b = 30;
//	case 2: b = 20;
//	case 3: b = 16;
//	default:b = 0;
//	}
//	return b;
//}
//
//int main()
//{
//	int a = func(1);
//	printf("%d", a);   //0
//	return 0;
//}

//switch() 语句的()中不可以是float类型

//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)
//	{
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default:
//			printf("hello");
//		}
//	case 2:
//		printf("third");
//
//	}
//	return 0;
//}


//从大到小输出
//写代码将三个整数按从大到小输出

//int main()
//{
//	int a, b, c;
//	int d[] = { 0 };
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b<c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//打印1-100之间所有3的倍数
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i%3 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//
//
//	return 0;
//}

//给两个数求他们的最大公约数

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = 0;
//	if (a > b) 
//	{
//		max = a;
//	}
//	else
//	{
//		max = b;
//	}
//	while (max)
//	{
//		if (a % max == 0 && b % max == 0)
//		{
//			printf("最大公约数是：%d", max);
//			break;
//		}
//		else
//			max--;
//	}
//	
//	return 0;
//}

//辗转相除法
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int t = 0;
//	scanf("%d %d", &m, &n);
//	while (t = m%n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("最大公约数是：%d", n);
//	return 0;
//}

//打印1000年到2000年之间的闰年
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for ( y = 1000; y <= 2000; y++)
//	{
//		//判断y是不是闰年
//		//被4整除不能被100整除是闰年
//		//能被400整除是闰年
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//			{
//				printf("%d ", y);
//				count++;
//			}
//		}
//		if (y % 400 == 0)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("总共有个%d闰年", count);
//	return 0;
//}


//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//判断y是不是闰年
//		//被4整除不能被100整除是闰年
//		//能被400整除是闰年
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("总共有个%d闰年", count);
//	return 0;
//}

//打印100-200之间的素数
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断素数
//		//只能被1和本身整除
//		//2->i-1之间的数字试除i,观察是否能整除
//		int j = 0;
//		for ( j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j) 
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

#include <math.h>
//int main()
//{
//		int i = 0;
//		for (i = 101; i <= 200; i+=2)
//		{
//			//判断素数
//			//只能被1和本身整除
//			//2->i-1之间的数字试除i,观察是否能整除
//			int j = 0;
//			int flag = 1;
//			for ( j = 2; j < sqrt(i); j++)
//			{
//				if (i % j == 0)
//				{
//					flag = 0;
//					break;
//				}
//			}
//			if (flag==1) 
//			{
//				printf("%d ", i);
//			}
//		}
//	return 0;
//}

//-------------------goto语句--------------------
//c语言中提供了可以滥用的goto语句和标记跳转符号
//适用于多层循环嵌套,一次跳出多层嵌套循环
// 只能在一个函数内跳转,不能跨函数
// 
// 
// 
//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//	goto flag;
//	return 0;
//	//死循环
//}

//关机程序
//只要运行起来，电脑就在1分钟内关机，如果输入：我是猪，就取消关机！
//shutdown -s -t 60
// shurdown -a
//
//
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	//关机
//	//c语言提供一个函数：system() -执行系统命令
//	char input[20] = { 0 };//存放输入的信息
//	system("shutdown -s -t 600");
//again:
//	printf("请注意你的电脑在1分钟后关机，如果输入我是猪，就取消关机\n");
//	scanf("%s", input);
//	//数组名本来就是地址，不用取地址，变量需要取地址
//	if (strcmp(input, "我是猪") == 0)   //两个字符串比较不能用== ，应该用strcmp
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//关机
	//c语言提供一个函数：system() -执行系统命令
	char input[20] = { "我" };//存放输入的信息
	system("shutdown -s -t 600");
	while (1)
	{
		printf("请注意你的电脑在1分钟后关机，如果输入我是猪，就取消关机\n");
		scanf("%s", input);
		//数组名本来就是地址，不用取地址，变量需要取地址
		if (strcmp(input, "我是猪") == 0)   //两个字符串比较不能用== ，应该用strcmp
		{
			system("shutdown -a");
			break;
		}
	}

	return 0;
}












