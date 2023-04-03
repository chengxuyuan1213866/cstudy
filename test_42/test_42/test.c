#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//--------------- 函数 ---------------------------
//1.库函数
// I/O 函数  printf  scanf getchar putchar 
// 字符串操作函数  strcmp strlen
// 字符操作函数 toupper (小写转大写)
// 内存操作函数  memcpy memcmp memeset
// 时间/日期操作函数  time
// 数学函数   sqrt  pow
// 其他库函数
// ---------相关学习网站----------
// http://www.cplusplus.com/reference/
// http://zh.cppreference.com/

//
//
#include <string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);   //拷贝字符串
//	printf("%s", arr1);   //%s以字符串的格式打印
//	return 0;
//}


//int main()//2.自定义函数
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);  //设置内存块
//	printf("%s", arr);
//	return 0;
//}


//2.自定义函数
// 返回类型  函数名(函数参数)
//
// 
//写一个函数找出两个整数的最大值
//int Max(int a, int b)
//{
//	if (a>=b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//函数的调用
//	int c = Max(a, b);
//	printf("%d", c);
//	return 0;
//}

//交换两个整型的内容

//函数返回类型的地方写出void,表示这个函数不返回任何值,也不需要返回
//void Swap1(int x, int y)
//{
// //不能完成任务
//  //在swap在被调用的时候,实参传给形参,其实形参是实参的临时拷贝
// 
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//scanf("%d%d", &a, &b);
//	printf("交换前a=%d,b=%d", a, b);
//	Swap1(a, b);
//	printf("交换后a=%d,b=%d", a, b);
//	return 0;
//}


//复习指针
//int main()
//{
//	int a = 10;  //四个字节空间
//	int* pa = &a; //pa是指针变量
//	*pa = 20;
//	printf("%d", a);
//	return 0;
//}


//void Swap2(int *pa,int *pb)
//{
// //可以完成任务
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//scanf("%d%d", &a, &b);
//	printf("交换前a=%d,b=%d\n", a, b);
//	Swap2(&a, &b);
//	printf("交换后a=%d,b=%d", a, b);
//	return 0;
//}


//swap1叫传值调用
// 形参只是实参的拷贝,不会影响实参
// 
//swap2叫传址调用
//形参和时实参之间有联系,函数内部能操作函数外部的数据
// 
//--------------------------------练习--------------------------------------
//写一个函数判断是否是素数
//int is_prime(int n)
//{
//	//2-n-1之间的数字
//	int j = 0;
//	for (j = 2; j < sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//
//}
//int main()
//{
//	//100-200之间的素数
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


//写一个函数判断一年是不是闰年
//一个函数如果不写返回类型,默认返回int类型
//int year(int n)
//{
//	if (((n%4==0)&&(n%100!=0)) || (n % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for ( y = 1000; y <= 2000; y++)
//	{
//		if (year(y) == 1)
//		{ 
//			printf("%d\n", y);
//			count++;
//		}
//	}
//	printf("总共有%d个闰年", count);
//	return 0;
//}

//写一个函数实现一个整型有序数组的二分查找
//int func(int arr[], int a, int sz)  //arr[]代表数组的意思
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > a)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid]<a)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;  //找不到了
//
//}
//--------------------错误------------------------
//int func(int arr[], int a)  //arr[]代表数组的意思
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > a)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < a)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;  //找不到了
//
//}
//------------------------------------------------------
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int a = 7;

	//找到返回元素在数组中的下标,找不到返回-1
	//数组arr传参,实际传递的不是数组本身,仅仅传过去了数组第一个元素的地址
	//如果函数需要数组元素个数,一定要在外部求得
	int b = func(arr,a);
	if (b == -1)
	{
		printf("找不到");
	}
	else
	{
		printf("该元素在数组中的下标是%d\n", b);
	}

	return 0;
}



















