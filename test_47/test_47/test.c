#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//函数的嵌套调用和链式访问
//不能嵌套定义!!!
//可以嵌套调用

//void test3()
//{
//	printf("这是test3\n");
//}
//int test2()
//{
//	//嵌套调用
//	test3();
//	printf("这是test2\n");
//	return 0;
//}
//
//int main()
//{
//
//	test2();
//	return 0;
//}
//链式访问---把一个函数的返回值作为另外一个函数的参数。

//int main()
//{
	//int len = strlen("abc");
	//printf("%d", len);
	////链式访问
	////将strlen的返回值作为printf的参数
	//printf("%d", strlen("abc"));
	//char arr1[20] = { 0 };
	//char arr2[] = "bit";
	//strcpy(arr1, arr2);
	//printf("%s", arr1);
	//链式访问
	//printf("%s", strcpy(arr1, arr2));

//	printf("%d", printf("%d", printf("%d", 43))); //4321
//	//printf函数返回打印在屏幕上字符的个数
//	return 0;
//}

//函数的声明和定义




//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数声明一下
//	//要满足先声明,后使用.函数的声明一般放在函数使用之前
//	// 函数的声明一帮放在头文件中
//	//---------
//	int Add(int, int);
//	//---------
//	int c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}
//
////函数的定义
//int Add(int a, int b)
//{
//	return (a + b);
//}

//#include "add.h"
#include "sub.h"
//导入静态库

#pragma comment(lib, "sub.lib")
int main()
{
	int a = 10;
	int b = 20;
	//int c = Add(a, b);
	int s = Sub(a, b);
	//printf("%d\n", c);
	printf("%d\n", s);

	return 0;
}





