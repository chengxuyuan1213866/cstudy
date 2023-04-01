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
int main()
{
	int m = 0;
	int n = 0;
	int t = 0;
	scanf("%d %d", &m, &n);
	while (t = m%n)
	{
		m = n;
		n = t;
	}
	printf("最大公约数是：%d", n);
	return 0;
}











