#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//--------------- ���� ---------------------------
//1.�⺯��
// I/O ����  printf  scanf getchar putchar 
// �ַ�����������  strcmp strlen
// �ַ��������� toupper (Сдת��д)
// �ڴ��������  memcpy memcmp memeset
// ʱ��/���ڲ�������  time
// ��ѧ����   sqrt  pow
// �����⺯��
// ---------���ѧϰ��վ----------
// http://www.cplusplus.com/reference/
// http://zh.cppreference.com/

//
//
#include <string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);   //�����ַ���
//	printf("%s", arr1);   //%s���ַ����ĸ�ʽ��ӡ
//	return 0;
//}


//int main()//2.�Զ��庯��
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);  //�����ڴ��
//	printf("%s", arr);
//	return 0;
//}


//2.�Զ��庯��
// ��������  ������(��������)
//
// 
//дһ�������ҳ��������������ֵ
//int Max(int a, int b)
//{
//	if (a>=b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//�����ĵ���
//	int c = Max(a, b);
//	printf("%d", c);
//	return 0;
//}

//�����������͵�����

//�����������͵ĵط�д��void,��ʾ��������������κ�ֵ,Ҳ����Ҫ����
//void Swap1(int x, int y)
//{
// //�����������
//  //��swap�ڱ����õ�ʱ��,ʵ�δ����β�,��ʵ�β���ʵ�ε���ʱ����
// 
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//scanf("%d%d", &a, &b);
//	printf("����ǰa=%d,b=%d", a, b);
//	Swap1(a, b);
//	printf("������a=%d,b=%d", a, b);
//	return 0;
//}


//��ϰָ��
//int main()
//{
//	int a = 10;  //�ĸ��ֽڿռ�
//	int* pa = &a; //pa��ָ�����
//	*pa = 20;
//	printf("%d", a);
//	return 0;
//}


//void Swap2(int *pa,int *pb)
//{
// //�����������
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//scanf("%d%d", &a, &b);
//	printf("����ǰa=%d,b=%d\n", a, b);
//	Swap2(&a, &b);
//	printf("������a=%d,b=%d", a, b);
//	return 0;
//}


//swap1�д�ֵ����
// �β�ֻ��ʵ�εĿ���,����Ӱ��ʵ��
// 
//swap2�д�ַ����
//�βκ�ʱʵ��֮������ϵ,�����ڲ��ܲ��������ⲿ������
// 
//--------------------------------��ϰ--------------------------------------
//дһ�������ж��Ƿ�������
//int is_prime(int n)
//{
//	//2-n-1֮�������
//	int j = 0;
//	for (j = 2; j < sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//
//}
//int main()
//{
//	//100-200֮�������
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


//дһ�������ж�һ���ǲ�������
//һ�����������д��������,Ĭ�Ϸ���int����
//int year(int n)
//{
//	if (((n%4==0)&&(n%100!=0)) || (n % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for ( y = 1000; y <= 2000; y++)
//	{
//		if (year(y) == 1)
//		{ 
//			printf("%d\n", y);
//			count++;
//		}
//	}
//	printf("�ܹ���%d������", count);
//	return 0;
//}

//дһ������ʵ��һ��������������Ķ��ֲ���
//int func(int arr[], int a, int sz)  //arr[]�����������˼
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > a)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid]<a)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;  //�Ҳ�����
//
//}
//--------------------����------------------------
//int func(int arr[], int a)  //arr[]�����������˼
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > a)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < a)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;  //�Ҳ�����
//
//}
//------------------------------------------------------
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int a = 7;

	//�ҵ�����Ԫ���������е��±�,�Ҳ�������-1
	//����arr����,ʵ�ʴ��ݵĲ������鱾��,��������ȥ�������һ��Ԫ�صĵ�ַ
	//���������Ҫ����Ԫ�ظ���,һ��Ҫ���ⲿ���
	int b = func(arr,a);
	if (b == -1)
	{
		printf("�Ҳ���");
	}
	else
	{
		printf("��Ԫ���������е��±���%d\n", b);
	}

	return 0;
}



















