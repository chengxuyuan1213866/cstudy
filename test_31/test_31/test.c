#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//循环语句
//while
// for
// do while
// 
//
//int main()
//{
//	int i = 1;
//
//	while (i<=10)
//{
//	if (i == 5)
//	{
//		continue; //结果为1234后死循环
//		//在while循环中，continue的作用是跳过本次循环continue后边的代码，
//		//直接去判断部分，看是否进行下一次循环
//	}
//	
//	printf("%d\n", i);
//	i++;
//}


	//while (i<=10)
	//{
	//	if (i == 5)
	//	{
	//		break;
	//		//在while循环中break用于永久的终止循环
	//	}
	//	
	//	printf("%d\n", i);
	//	i++;
	//}
//	return 0;
//}


//分析代码的意思
//int main()
//{
//	//getchar--获取一个字符 --- 返回的类型是int类型
//	//EOF---end of file --- 文件的结束标志
//	int ch = getchar();
//	//printf("%c\n", ch);
//	//putchar --输出一个字符
//	putchar(ch);
//	return 0;
//}

int main()
{
	int ch = 0;
	//ctrl + z  --- getchar读取结束
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return;
}






























