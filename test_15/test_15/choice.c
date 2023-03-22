#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//分支判断
//int main() 
//{
//	int input = 0;
//	printf("加入比特:>");
//	printf("那要好好学习吗？(1/0)");
//	scanf("$d", &input);
//	if (input == 1)
//		printf("能得到好工作\n");
//	else
//		printf("收垃圾\n");
//
//	return 0;
//}
//循环
//比特 - 30000代码 - 找一个不错的工作
//
//int main()
//{
//	int line = 0;
//	//while 循环
//	while(line < 30000) {
//		
//		printf("写代码:%d\n",line);
//		line++;
//
//	}
//	if (line == 30000)
//		printf("获得工作\n");
//}
//_____________函数_________

////两个数相加
//Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	//int sum = a + b;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return;
//}

//---------数组----------------
//一组相同类型元素的集合
//10个整型1-10存起来
int main()
{
	//数组是用下标来操作的
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while (i < 10) {
		printf("%d\n", arr[i]);
		i++;
	}
	
	//char ch[5] = { 'a','b','c' }; //不完全初始化，其余值默认为0
	return 0;
}








