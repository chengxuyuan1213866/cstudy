#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//----------------------       指针          ------------------------------------
//
// 指针在32为平台上是4个字节 ，64位平台上8个字节
//


//int main()
//{
//	int a = 10;  // a占四个字节
//	int* pa = &a;//拿到的的是a的四个字节中第一个字节的地址
//	*pa = 20;
//
//	return 0;
//}




//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//
//	printf("%d\n", sizeof(pa));  //8
//	printf("%d\n", sizeof(pc));	 //8
//	printf("%d\n", sizeof(pf));  //8
//
//	return 0;
//}

//指针类型的意义
//1.指针类型决定了：指针解引用的权限有多大（整型解引用4个字节，字符型1个字节）
//2.指针的类型决定了，指针向前或者向后走一步有多大距离。
// 
//

//int main()
//{
//	//int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//	//char* pc = &a;
//	//*pc = 0;
//	//return 0;
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1); //+1过了4个字节
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);//+1过了1个字节
//
//
//}




//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;     //其实是下标为i的地址
//		//一次跳过4个字节
//	}
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;     //一次只跳过一个字节char指针
//	}
//	return 0;
//}

//================  野指针  =========================
//指针指向的位置是不可知的（随机的，不正确的、没有明确限制的）
//野指针的成因
//1.指针未初始化
//2.指针越界访问


//1.指针未初始化
//int main()
//{
//	//这里p就是一个野指针
//	int* p;   //局部指针变量，局部变量不初始化，默认是随机值
//	*p = 20;  //非法访问内存
//	return 0;
//}


//2.指针越界访问
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for ( i = 0; i <= 10; i++)
//	{
//		*p = i;  //第11次后超出数组范围，越界访问
//		p++;
//	}
//	return 0;
//}


//3.指针指向空间释放

//int* test()
//{
//	int a = 10;
//	return &a;
//	//在出test函数时a的空间被释放了
//
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	//当前不知道指针应该初始化为什么地址的时候，直接初始化为NULL
//	//int* p = NULL;
//	////明确知道初始化的值
//	//int a = 10;
//	//int* pa = &a;
//
//	//c语言本身是不会检查数据越界的行为的
//	int* p = NULL;
//	//指针使用之前检查它的有效性，避免野指针
//	if (p != NULL)
//	{
//		*p = 10;
//	}
//
//	return 0;
//}



//指针运算

//1.指针+-整数
//2.指针-（减）指针
//3.指针的关系运算


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	//2.指针关系运算
//	while (p<=pend)
//	{
//		printf("%d\n", *p);
//		//1.加减
//		p++;
//	}
//	return 0;
//}

//3.指针-指针   ------//	//指针减指针，得到的是两个元素间的个数
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char c[5];
//	//指针和指针相减的前提，两个指针指向同一片空间
//	pritnf("%d\n", &arr[9] - &c[0]);
//
//	//指针减指针，得到的是两个元素间的个数
//	//printf("%d\n", &arr[9] - &arr[0]);
//
//	return 0;
//}

#include <string.h>


//常规实现 -- 计数器的方法
//int my_strlen(char* s)
//{
//	int count = 0;
//	while (*s!='\0')
//	{
//		count++;
//		s++;
//		
//	}
//	return count;
//}
//递归实现
//int my_strlen(char* s)
//{
//	if (*s != '\0')
//	{
//		s++;
//		return 1 + my_strlen(s);
//	}
//}
//不是所有的控件路径都返回值
//指针-指针
//int my_strlen(char* s)
//{
//	char* start = s;
//	while (*s!='\0')
//	{
//		s++;
//	}
//	return s - start;
//
//}
//int main()
//{
//	//strlen - 求字符串长度
//	//递归实现my_strlen
//	//char arr[] = "abc";
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}






















