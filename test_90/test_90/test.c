#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
//模拟实现strcpy
#include <assert.h>

//把src指向的内容拷贝放进dest指向的空间中
//从本质上讲，希望dest指向的内容被修改，src指向的内容不应该被修改，加const保护了src的内容不被修改
//
//strcpy这个库函数，其实返回的是目标空间的起始地址。
//
//strcpy模拟实现
//char* my_strcpy(char* dest,const char* src)
//{
//	assert(src != NULL);//断言
//	assert(dest != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;//hello的拷贝
//	}
//	return ret;
//}
//
////strlen求字符串长度
////my_strlrn
//
//
////size_t   是  unsigned int  （无符号整型）
//size_t my_strlen(const char* str)
//{
//	//assert(str != NULL);
//	assert(str);
//	int m = 0;
//	while (*str++ != '\0')
//	{
//		m++;
//
//	}
//	return m;
//}
//
//
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxx";
//	char arr2[] = "hello";
//	printf("%zd\n", my_strlen(arr2));
//	//my_strcpy(arr1, arr2);   //1.目标空间的起始地址  2.原空间的起始地址
//	printf("%s\n", my_strcpy(arr1, arr2));  //链式访问
//	return 0;
//}



//int main()
//{
//	//1.
//	//int num = 10;
//	//int* p = &num;
//	//*p = 20;
//	//printf("%d\n", num);
//	
//	//2.
//	//const 修饰变量，就被称为常变量，不能被修改，但是本质上是变量
//	//
//	const int num = 10;
//	//num = 20 //error
//
//	//int* const p = &num;
//	//int n = 100;
//	////const修饰指针变量
//	////const如果放在*右边，修饰的是指针变量p，表示指针变量不能改变
//	////		但是指针指向的内容是可以修改的
//	//*p = 20; 
//	////p = &n; // 修改p变量的值
//
//
//	//const int* p = &num;
//	//int n = 100;
//	////const修饰指针变量
//	////const如果放在*左边，修饰的是*p，表示指针指向的内容，是不能通过指针来改变的
//	////	但是指针变量本身是可以修改的
//	////*p = 20;
//	//p = &n; // 修改p变量的值
//
//
//	printf("%d\n", num);
//
//	return 0;
//}

//-------------------------------------作业  例题-------------------------------------------


//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d  b = %d  c = %d", a, b, c);
//	//9 23 8
//	return 0;
//}

//输入一个整数，输出该数32位二进制表示中1的个数，其中负数用补码表示

//int NumberOf1(int n)
//{
//    //只对正数有用
//	int count = 0;
//	while (n)
//	{
//		if (n%2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}


//int NumberOf1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n%2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}

//int NumberOf1(unsigned int n)
//{
//	int count = 0;
//	int i = 0;
//	for ( i = 0; i < 32; i++)
//	{
//		if(((n >> i)&1)==1);
//		{
//			count++;
//		}
//	}
//
//	return count;
//}
//
//int NumberOf1(unsigned int n)
//{
//	int count = 0;
//	int i = 0;
//	while (n)
//	{
//		n = n & (n - 1);   //!!!!!!!!!!!!!!去掉二进制的最后一个1
//		count++;
//	}
//
//	return count;
//}
//
//
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = NumberOf1(n);
//	printf("%d\n", ret);
//	return 0;
//}


//求两个二进制中不同位的个数



//int NumberOf1(unsigned int n)
//{
//	int count = 0;
//	int i = 0;
//	while (n)
//	{
//		n = n & (n - 1);   //!!!!!!!!!!!!!!去掉二进制的最后一个1
//		count++;
//	}
//
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d %d", &m, &n);
//
//	//方法二
//	int ret = m ^ n;   //异或操作   相同为0，不同为1
//	printf("%d\n", NumberOf1(ret));
//	//方法一
//	//for ( i = 0; i < 32; i++)
//	//{
//	//	if (((m >> i) & 1) != ((n >> i) & 1))
//	//	{
//	//		count++;
//	//	}
//	//}
//	//printf("%d", count);
//	return 0;
//}


//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列


//int main()
//{
//
//	int n = 0;
//	scanf("%d", &n);
//	//获取n的二进制中的奇数位和偶数位
//	int i = 0;
//	//打印所有偶数位
//	for  (i = 31; i >= 1; i-=2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//	for ( i = 30; i >=0 ; i-=2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//
//	return 0;
//}


//不创建其他变量，交换两个变量的值

//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a = %d  b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后：a = %d  b = %d\n", a, b);
//
//	return 0;
//}




































