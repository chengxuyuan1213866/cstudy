#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�ݹ�,�����������ı�̼���
//
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}


//�ݹ��������Ҫ����
// 1.������������,�������������������ʱ��,�ݹ�㲻�ټ���
// 2.ÿ�εݹ����֮��Խ��Խ�ӽ������������
//��ϰ ����һ������ֵ,��˳���ӡ����ÿһλ.

//void func(unsigned int n)
//{
//	if (n > 9)  //�ݹ����
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
//	func(num);   //fun ������ӡ�����������ֵ�ÿһλ
//	return 0;
//}

//void test(int n)
//{
//	if (n<10000)
//	{
//		test(n + 1);
//		//0x00007FF6463D17B9 ����δ��������쳣
//		//(�� test_48.exe ��): 0xC00000FD: Stack overflow 
//		//(����: 0x0000000000000001, 0x000000EFDCF03FF8)��
//		//ջ���
//		//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//		// ջ��     �ֲ�����
//		// ����		��̬�ڴ����� (malloc/free  calloc realloc)
//		// ��̬��	ȫ�ֱ���  ��̬����
//		// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//		//д�ݹ�ʱӦ��ע�������
//		//1.�������ݹ�,������������,ÿ�εݹ�ƽ���������
//		// 2.�ݹ��β���̫��
//		//
//		//
//		//https://stackoverflow.co/
//		//����Ա֪����
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}

//��д��������������ʱ����,���ַ�������
#include <string.h>
//���淽��
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

//�ݹ��д��
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
//	ģ��ʵ��һ��strlrn����
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}



//-------------------------------------------------------------------------------------------------

//�ݹ������


//��n�Ľ׳�

//--------------------�ݹ�ʵ��-------------------
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

//---------------------����ʵ��----------------------


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


//��ϰ��,���n��쳲�������


//---------------------�ݹ�(Ч��̫��)-----------------------------
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
//	printf("��%d��쳲���������%d", a, b);
//	return 0;
//}


//--------------------------����----------------------------------

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
//	printf("��%d��쳲���������%d", a, b);
//	return 0;
//}


//��ŵ������
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
		hanoi(n - 1, a, c, b);//��A���ϵ�n-1�����ӽ���C������B��
		move(a, c);//��A�������һ����������C��
		hanoi(n - 1, b, a, c);//��B���ϵ�n-1�����ӽ���A������C��
	}
}
//move�е�ʵ����hanoi�����е��β����Ӧ����hanoi�������β�a��b��c����Ӧ��ֵҲ�����й��ɵı仯
int main()
{
	int n = 0;
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;
}

// 
//������̨������

//��0�ӵ�n�ʹ�n����0ûɶ����
#include<stdio.h>
int count = 0;//����ȫ�ֱ�����ͳ�Ƹ���������
void frog(int n)
{
	if (n == 0)//��̨����Ϊ0������������1
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
	printf("������̨�׸�����");
	scanf("%d", &n);
	frog(n);
	printf("һ����%d������\n", count);
	return 0;
}









