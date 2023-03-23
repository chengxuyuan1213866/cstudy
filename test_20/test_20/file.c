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

void test()
{
	static int a = 1; 
	//没有static时每执行一次函数更新一次值，最终结果为10个2
	//当static修饰后 a创建了，下一次a没有销毁，下次依旧复用
	//！！static修饰局部变量，改变了局部变量的生命周期（本质上是改变了变量的存储类型）
	//static是将局部变量从栈区变到静态区
	
	a++;
	printf("%d ", a);

}

int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}

	return 0;
}










