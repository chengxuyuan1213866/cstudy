#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//������Ƕ�׵��ú���ʽ����
//����Ƕ�׶���!!!
//����Ƕ�׵���

//void test3()
//{
//	printf("����test3\n");
//}
//int test2()
//{
//	//Ƕ�׵���
//	test3();
//	printf("����test2\n");
//	return 0;
//}
//
//int main()
//{
//
//	test2();
//	return 0;
//}
//��ʽ����---��һ�������ķ���ֵ��Ϊ����һ�������Ĳ�����

//int main()
//{
	//int len = strlen("abc");
	//printf("%d", len);
	////��ʽ����
	////��strlen�ķ���ֵ��Ϊprintf�Ĳ���
	//printf("%d", strlen("abc"));
	//char arr1[20] = { 0 };
	//char arr2[] = "bit";
	//strcpy(arr1, arr2);
	//printf("%s", arr1);
	//��ʽ����
	//printf("%s", strcpy(arr1, arr2));

//	printf("%d", printf("%d", printf("%d", 43))); //4321
//	//printf�������ش�ӡ����Ļ���ַ��ĸ���
//	return 0;
//}

//�����������Ͷ���




//int main()
//{
//	int a = 10;
//	int b = 20;
//	//��������һ��
//	//Ҫ����������,��ʹ��.����������һ����ں���ʹ��֮ǰ
//	// ����������һ�����ͷ�ļ���
//	//---------
//	int Add(int, int);
//	//---------
//	int c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}
//
////�����Ķ���
//int Add(int a, int b)
//{
//	return (a + b);
//}

//#include "add.h"
#include "sub.h"
//���뾲̬��

#pragma comment(lib, "sub.lib")
int main()
{
	int a = 10;
	int b = 20;
	//int c = Add(a, b);
	int s = Sub(a, b);
	//printf("%d\n", c);
	printf("%d\n", s);

	return 0;
}





