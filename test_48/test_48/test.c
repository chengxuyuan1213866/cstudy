#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//递归,程序调用自身的编程技巧
//
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}


//递归的两个必要条件
// 1.存在限制条件,当满足这个限制条件的时候,递归便不再继续
// 2.每次递归调用之后越来越接近这个限制条件
//练习 接受一个整型值,按顺序打印他的每一位.

//void func(unsigned int n)
//{
//	if (n > 9)  //递归深度
//	{
//		func(n / 10);
//
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//
//	scanf("%d", &num);
//	func(num);   //fun 函数打印参数部分数字的每一位
//	return 0;
//}

//void test(int n)
//{
//	if (n<10000)
//	{
//		test(n + 1);
//		//0x00007FF6463D17B9 处有未经处理的异常
//		//(在 test_48.exe 中): 0xC00000FD: Stack overflow 
//		//(参数: 0x0000000000000001, 0x000000EFDCF03FF8)。
//		//栈溢出
//		//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//		// 栈区     局部变量
//		// 堆区		动态内存分配的 (malloc/free  calloc realloc)
//		// 静态区	全局变量  静态变量
//		// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//		//写递归时应该注意的问题
//		//1.不能死递归,都有跳出条件,每次递归逼近跳出条件
//		// 2.递归层次不能太深
//		//
//		//
//		//https://stackoverflow.co/
//		//程序员知乎网
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}

//编写函数不允许创建临时变量,求字符串长度
#include <string.h>
//常规方法
//int my_strlen(char * str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//递归的写法
//int my_strlen(char* str)
//{
//	if (*str != 0)
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "bit";
//	模拟实现一个strlrn函数
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}



//-------------------------------------------------------------------------------------------------

//递归与迭代


//求n的阶乘

//--------------------递归实现-------------------
//int func(int x)
//{
//	if (x != 1)
//	{
//		return x * func(x - 1);
//	}
//	return 1;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = func(a);
//	printf("%d! = %d ", a, b);
//	return 0;
//}

//---------------------迭代实现----------------------


//int main()
//{
//	int a = 0;
//	int i = 0;
//	int tmp = 1;
//	scanf("%d", &a);
//	for ( i = 1; i <= a; i++)
//	{
//		tmp = tmp * i;
//	}
//	printf("%d! = %d", a, tmp);
//	return 0;
//}


//练习四,求第n个斐波那契数


//---------------------递归(效率太低)-----------------------------
//int Lib(int n)
//{
//	if (n > 0 && n <= 2)
//		return 1;
//	else
//	{
//		return Lib(n - 1) + Lib(n - 2);
//	}
//
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = Lib(a);
//	printf("第%d个斐波那契数是%d", a, b);
//	return 0;
//}


//--------------------------迭代----------------------------------

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = Fib(a);
//	printf("第%d个斐波那契数是%d", a, b);
//	return 0;
//}


//汉诺塔问题
// 
// 

void move(int x, int y)
{
	printf("%c->%c\n", x, y);
}
void hanoi(int n, char a, char b, char c)
{
	if (n == 1)
	{
		move(a, c);
	}
	else
	{
		hanoi(n - 1, a, c, b);//将A座上的n-1个盘子借助C座移向B座
		move(a, c);//将A座上最后一个盘子移向C座
		hanoi(n - 1, b, a, c);//将B座上的n-1个盘子借助A座移向C座
	}
}
//move中的实参与hanoi函数中的形参相对应，而hanoi函数中形参a，b，c所对应的值也是在有规律的变化
int main()
{
	int n = 0;
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;
}

// 
//青蛙跳台阶问题

//从0加到n和从n减到0没啥区别
#include<stdio.h>
int count = 0;//创建全局变量来统计个跳法个数
void frog(int n)
{
	if (n == 0)//当台阶数为0是跳法个数加1
		count++;
	else if (n < 0);
	else
	{
		frog(n - 1);
		frog(n - 2);
	}

}
int main()
{
	int n;
	printf("请输入台阶个数：");
	scanf("%d", &n);
	frog(n);
	printf("一共有%d种跳法\n", count);
	return 0;
}









