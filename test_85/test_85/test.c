#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//debug称为调试版本
//release称为发布版本 ---  无法调试
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n",arr[i]);
//	}
//	return 0;
//}


//下面代码有bug，请调试修改
//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘    （bug所在）
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//int main()
//{
//    int i = 0;
//    int arr[10] = { 0 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;   //（bug）越界访问，有可能会访问到i所在的位置，造成死循环
//        printf("hehe\n");
//    }
//    return 0;
//}


//模拟实现strcpy - 字符拆拷贝

#include <string.h>


//void my_strcpy(char* dest, char* src)
//{
//	while (*(src)!='\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*(src)!='\0')
//	{
//		*dest++ = *src++;
//
//	}
//	*dest = *src;
//}

void my_strcpy(char* dest, char* src)
{
	while (*dest++ = *src++)   //既拷贝了\0，又使得循环停止
	{


	}

}

int main()
{
	char arr1[20] = "xxxxxxxx";
	char arr2[] = "hello";

	my_strcpy(arr1, arr2);
	//strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}










