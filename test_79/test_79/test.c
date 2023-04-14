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







