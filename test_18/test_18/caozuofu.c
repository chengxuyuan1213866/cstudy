#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//算数操作符  + - * / %
//移位操作符  >>(右移)   <<



//int main()
//{
//	
//	//int a = 9 / 2;    //结果为4 结果取商 
//	//printf("%d", a);
//	/*float a = 9 / 2.0;*/
//	//printf("%f", a);  //a = 4.500000
//	int a = 9 % 2;   //%取余
//	printf("%d", a);   //a =1
//
//
//	return 0;
//}


//int main()
//{
//	int a = 2;
//	//左移操作符 -- 移动的是二进制位
//	int b = a << 1;
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}

//----------------------------------------
//位操作符
// & 按位与
// | 按位或
// ^  按位异或


//赋值
//int main()
//{
//	int a = 2;
//	a = a + 5;
//	/*a += 5;*/
//	printf("%d\n", a);
//
//
//	return 0;
//}

// ！的用法
//int main()
//{
//	//0表示假，非0表示真；
//	int a = 0;
//	printf("%d\n", !a);
//	return 0;
//}




//sizeof操作符   --- 以字节为单位
//int main()
//{
//	//sizeof 计算类型或者变量的大小
//	int a = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);  //括号可以省略，表面他是一个操作符
//
//	return 0;
//}
//int main()
//{
//	//sizeof 计算数组大小
//	//10个元素
//	int arr[10] = { 0 };   //10*4 = 40
//	printf("%d\n", sizeof(arr));   //计算的是数组的总大小，单位是字节
//	printf("%d\n", sizeof(arr[0])); //4
//	//计算数组元素个数的方法
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//
//	return 0;
//}





//~按位取反所有位都要取反，包括符号位
//int main()
//{
//	int a = 0;
//	//整数在内存中存储的是补码
//	//正数的原码反码补码相同
//	//负数的原码反码补码不同
//	printf("%d", ~a); // ~按位（二进制位）取反
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int b = a++;  //后置++    先使用，后++
//
//	printf("%d\n", b); //10
//	printf("%d\n", a); //11
//	//int b = ++a;  //前置++    先++，后使用
//
//	//printf("%d\n", b); //11
//	//printf("%d\n", a); //11
//
//	return 0;
//
//}


//int main()
//{
//	//int a = 3.14;   //会丢失精度
//	//强制类型转化
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}



//逻辑操作符  &&并 ----  ||或
//int main()
//{
//	//int a = 3;
//	//int b = 5;
//	//int c = a && b;
//	//printf("%d\n", c);
//	//if (a && b) {
//
//	//}
//	int a = 1;
//	int b = 0;
//	int c = a || b;
//	printf("%d\n", c);
//
//
//	return 0;
//}

//条件操作符 （三目操作符） （表达式1) ?(表达式2)  : (表达式3)

//1成立 ，执行2，输出2
//1不成立，执行3 ，输出3

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//	//if (a > b) {
//	//	max = a;
//
//	//}
//	//else
//	//{
//	//	max = b;
//	//}
//	//与上面if表达式等价
//	max = a > b ? a : b;
//	printf("%d\n", max);
//	return 0;
//}


//逗号表达式
int main()
{
	int a = 0;
	int b = 3;
	int c = 5;
	int d = (a = b + 2, c = a - 4, b = c + 2);  //3
	//逗号表达式，是从左向右计算的
	//整个表达式的结果是最后一个表达式的结果
	printf("%d\n",d)


	return 0;
}



