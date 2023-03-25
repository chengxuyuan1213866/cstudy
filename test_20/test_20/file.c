#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//c语言提供的关键字
//1.c语言提供的（不能自己创建）
//2.关键字不能做变量名
//auto  -- 自动的 --每个局部变量都是auto修饰的

//extern -- 声明外部符号
//register -- 寄存器关键字
//int main()
//{
//	//大量/频繁被使用的数据，想放在寄存器中，提升效率
//	register int num = 100; //建议num的值存放在寄存器中
//	return 0;
//}
//---signed -- 有符号的
//unsigned  无符号的

//static 静态的
//union  联合体/共用体
//void  空
//volatile ---------

// define/include ---不是关键字。预处理指令
//------------------------------------------------------------------
//typedef 类型重定义

//typedef unsigned int u_int;
//int main()
//{
//	unsigned int num = 100;
//	u_int num = 100; //与上面等价
//	return 0;
//}

//关键字static  -- 静态的
//1.static 修饰局部变量
//2.static 修饰全局变量
//3.static 修饰函数

//1.修饰局部变量
//void test()
//{
//	static int a = 1; 
//	//没有static时每执行一次函数更新一次值，最终结果为10个2
//	//当static修饰后 a创建了，下一次a没有销毁，下次依旧复用
//	//！！static修饰局部变量，改变了局部变量的生命周期（本质上是改变了变量的存储类型）
//	//static是将局部变量从栈区变到静态区
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}

//2修饰全局变量

//声明全局变量
// 全局变量在整个工程中都可以使用
//extern 声明外部符号
//static修饰全局变量使得这个全局变量只能在自己所在的源文件内部使用，其他源文件不能使用！
//全局变量在其他源文件内部可以被使用，是因为全局变量具有外部链接属性
//但是被static修饰之后，就变成了内部链接属性，其他源文件就不能链接到这个静态的全局变量了！
//extern int g_val;
//
//int main()
//{
//
//	printf("%d\n", g_val);
//	return 0;
//
//}

//3.修饰函数

//声明外部函数
//static修饰函数，使得函数的只能在自己所在源文件内部使用，不能在其他源文件内部使用
//本质上：static是将函数的外部链接属性变成内部链接属性（和static修饰全局变量相同）
//extern int Add(int a, int b);
//
//
//int main()
//{
//	int a = 10, b = 20;
//	printf("%d\n",Add(a, b));
//	return 0;
//}


//-----------------------------------------------------------------------------------------
//#define定义常量和宏
//define 预处理指令
//1.define定义符号
//#define MAX 1000
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}

//2.define定义宏
//#define ADD(X,Y) X+Y
//规范写法
//#define ADD(X,Y) ((X)+(Y))
//int main() 
//{
//	printf("%d\n", 4*ADD(2, 3));
//				   //4*2+3
//	return 0;
//}
