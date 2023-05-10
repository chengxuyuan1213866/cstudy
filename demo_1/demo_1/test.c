#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int cnt = 0;
//int fib(int x)
//{
//	cnt++;
//	if (x == 0)
//	{
//		return 1;
//	}
//	else if (x == 1)
//	{
//		return 2;
//	}
//	else
//	{
//		return fib(x - 1) + fib(x - 2);
//	}
//}
//int main()
//{
//	int a = fib(8);
//	printf("%d\n", a);
//	printf("%d", cnt);
//	return 0;
//}


//死循环
//int main()
//{
//	int x = 1;
//	do
//	{
//		printf("%2d\n", x++);
//	} while (x--);
//	return 0;
//}


//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (x = 0, y = 0; (y = 123) && (x < 4); x++);
//
//
//	return 0;
//
//}

//求两个数的最小公倍数

//int fun(int a, int b)
//{
//	int c = a * b;
//	int i = 0;
//	if (a>b)
//	{
//		i = a;
//	}
//	else
//	{
//		i = b;
//	}
//
//	for ( i; i < c; i++)
//	{
//		if ((a % i == 0) && (b % i == 0))
//		{
//			return i;
//		}
//	}
//	return c;
//
//}
//int main()
//{
//	int a = 5;
//	int b = 7;
//	int c = fun(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//将一句话的单词进行倒置，标点不倒置
//I like beijing
//bejing. like I

#include <string.h>
void reverse(char* left, char* right)
{
	while (left<right)
	{
		char tmp = 0;
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[100] = { 0 };
	gets(arr);
	//三步反转法
	//1.字符串整体翻转

	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	//printf("%s", arr);
	//2.每个单词逆序
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end !=' '&& *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end == ' ')
		{
			start = end + 1;
		}
		else
		{
			start = end;
		}
	}
	printf("%s", arr);
	return 0;
}











