#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//逗号表达式-- 从左往右依次计算,返回最左边的值
//exec((v1, v2), (v3, v4), v5, v6);
//         v2        v4     v5  v6
//

//打印乘法口诀表
//口诀的行和列自己指定
//void func(int x)
//{
//	int i = 0;
//	int j = 0;
//	for ( i = 1; i <= x; i++)
//	{
//		for ( j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	func(a);
//	return 0;
//}


//Fun(2) == 16
//int Fun(int n)
//{
//	if (n==5)
//	{
//		return 2;
//	}
//	else
//	{
//		return 2 * Fun(n + 1);
//	}
//}
//int main()
//{
//	int a = Fun(2);
//	printf("%d", a);
//	return 0;
//}

//字符串逆序(递归实现)
// 
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//void reverse_string(char * arr)
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++; 
//		right--;
//
//	}
//
//}
//---------递归实现--------------
//char reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str+1)>=2)
//	{
//		reverse_string(str + 1);
//	}
//
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	
//	char arr[] = "abcdef";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse_string(arr);
//	printf("%s",arr);
//	return 0;
//}



//计算一个数的每位之和

//int DigitSum(int x)
//{
//
//	if (x > 9)
//	{
//		int a = x % 10;
//		int b = x / 10;
//		return DigitSum(b) + a;
//	}
//	else
//	{
//		return x;
//	}
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int c = DigitSum(a);
//	printf("%d", c);
//	return 0;
//}

//递归实现n的k次方
double my_pow(int x, int y)
{
	if (y>0)
	{
		return x * my_pow(x, y - 1);
	}
	else if (y==0)
	{
		return 1.0;
	}
	else
	{
		return 1.0 / (my_pow(x, -y));
	}

}
int main()
{
	int n = 2;
	int k = 3;
	scanf("%d %d", &n, &k);
	double a = my_pow(n, k);
	printf("%lf", a);
	return 0;
}






























