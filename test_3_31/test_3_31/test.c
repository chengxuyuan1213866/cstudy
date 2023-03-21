#define _CRT_SECURE_NO_WARNINGS 1

//写代码
//1.写出主函数（main函数）
//100-500 代码
//c语言是从主函数的第一行开始执行的
//函数入口

#include <stdio.h>
//int main() 
//{
	//打印比特
	//printf("Bite");
	//return 0;
//}
//编译运行快捷键CTRL F5
//创建变量
//int main() {
//
//	int age = 20;
//	age += 1;
//	printf("%d\n", age);
//
//	return 0;
//}
//%d - 整型
//%f - float
//%lf - double


//scanf是输入函数
int main() {

	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("%d", sum);

	return 0;
}



