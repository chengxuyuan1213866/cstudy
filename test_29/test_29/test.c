#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//c语言是结构化的程序设计语言
// 顺序结构
// 
// 选择结构
// 
// 循环结构
//
// 分支语句（选择结构）
// if
// switch
//
//int main()
//{
//	int age = 60;
//	if (age < 18)
//		printf("少年\n");
//	else if (age >= 18 && age < 26)  //18<=age<26 会先执行18<=age结果为真为1，然后1<26成立，打印青年
//		printf("青年\n");
//	else if (age >= 26 && age < 40)
//		ptinrf("中年\n");
//	else if (age >= 40 && age < 60)
//		ptinrf("状年\n");
//	else if (age >= 60 && age < 100)
//		ptinrf("老年\n");
//	else
//	{
//		ptintf("老不死\n");
//	}
//
//
//	//if (age >= 18)
//	//	printf("成年\n");
//	//if (age >= 18)
//	//
//	//	printf("成年\n");
//	//else
//	//	printf("未成年\n");
//	//	printf("不能谈恋爱\n");//{}可以让else和if控制多条语句，否则默认执行一条语句
//	
//	return 0;
// }

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	//结果什么都没有打印
//	//else 和它离的最近的if匹配！！！！！!
//	//代码风格 - <高质量的C++/C编程指南>
//	return 0;
//}


//判断一个数是否为奇数
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a%2!=0)
//	{
//		printf("%d是奇数", a);
//	}
//	else
//	{
//		printf("%d不是奇数", a);
//	}
//
//
//	return 0;
//}
//判断1-100之间的奇数
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		if (i % 2 != 0)
//			printf("%d\n", i);
//	}
//
//
//
//	return 0;
//}


//switch 多分支
//case决定入口
//break决定出口
//int main()
//{
//	int day = 0;
//	//float day = 0;
//	scanf("%d", &day);
//	switch (day)   //()里面必须是整型常量表达式
//	{
//	case 1:       //case后面必须是常量
//		printf("星期一\n"); //在case 1后面没有阻止的话，会一直执行下去,需要加一个break就会停止
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n"); 
//		break;
//	case 4:
//		printf("星期四\n"); 
//		break;
//	case 5:
//		printf("星期五\n"); 
//		break;
//	case 6:
//		printf("星期六\n"); 
//		break;
//	case 7:
//		printf("星期天\n"); 
//		break;
//
//		
//		
//	}
//
//
//	return 0;
//}



//1-5 工作日
//6-7 休息日


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)   //()里面必须是整型常量表达式
//	{
//	case 1:       //case后面必须是常量
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:		
//	case 7:		
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//	}
//	return 0;
//}


int  main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;	
	case 3:
		switch (n)
		{//switch语句允许嵌套
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		};
	case 4:
			m++;
			break;
	default:
		break;
	}
	printf("m = %d,n = %d", m, n); //m = 5,n=3
	return 0;
}












