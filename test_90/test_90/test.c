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
char* my_strcpy(char* dest,const char* src)
{
	assert(src != NULL);//断言
	assert(dest != NULL);
	char* ret = dest;
	while (*dest++ = *src++)
	{
		;//hello的拷贝
	}
	return ret;
}

//strlen求字符串长度
//my_strlrn


//size_t   是  unsigned int  （无符号整型）
size_t my_strlen(const char* str)
{
	//assert(str != NULL);
	assert(str);
	int m = 0;
	while (*str++ != '\0')
	{
		m++;

	}
	return m;
}



int main()
{
	char arr1[20] = "xxxxxxxxxxxxxx";
	char arr2[] = "hello";
	printf("%zd\n", my_strlen(arr2));
	//my_strcpy(arr1, arr2);   //1.目标空间的起始地址  2.原空间的起始地址
	printf("%s\n", my_strcpy(arr1, arr2));  //链式访问
	return 0;
}



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
















































