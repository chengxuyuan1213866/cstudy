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

//int main()
//{
//	int ch = 0;
//	//ctrl + z  --- getchar读取结束
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return;
//}

//int main()
//{
//	//
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	printf("请确认密码(Y/N):>");
//	//清理缓冲区
//	int tmp = 0;
//	//清理缓冲区中的多个字符
//	while ((tmp = getchar())!='\n')
//	{
//		;
//	}
//	getchar(); //处理'\n'
//	int ch = getchar();
//	if (ch == 'Y') {
//		printf("确认成功");
//	}
//	else
//	{
//		printf("确认失败");
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch=getchar())!= EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;               //初始化
//	while (i <= 10)			//判断部分
//	{
//		printf("%d", i);
//		i++;				//调整部分
//	}
//	return 0;
//}


//-----------------------for循环----------------------------

//      初始化   判断    调整
//for (表达式1;表达式2;表达式3)
//			循环语句；

//基本书写形式
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}
 //break 和continue
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		//if (i == 5)
//		//	break;//终止整个循环
//		if (i == 5)
//			continue; //结果是1234 678910
//		printf("%d\n", i);
//	}
//	return 0;
//}

//for循环的建议：
//1.不可在for循环体内修改循环变量，防止for循环失去控制

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//
//		printf("%d\n", i);
//		//i = 5; // 死循环
//	}
//	return 0;
//}

// 2.建议for循环控制变量的取值采用“前闭后开区间”写法
//

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//for循环的变种
//int main()
//{
//	//判断部分的省略--判断部分恒为真 --- 使得for循环变为死循环  --
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		
//		for (; j < 3; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}


//
//int main()
//{
//	int x, y;
//	for (x=0,y=0;x<2 && y<5; ++x,y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//例题
int main() {
	int i = 0;
	int k = 0;
	for ( i = 0,k=0;  k=0 ; i++,k++)
	{
		k++;
	}
	return 0;
}









