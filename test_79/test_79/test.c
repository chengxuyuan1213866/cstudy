#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//----------------------       ָ��          ------------------------------------
//
// ָ����32Ϊƽ̨����4���ֽ� ��64λƽ̨��8���ֽ�
//


//int main()
//{
//	int a = 10;  // aռ�ĸ��ֽ�
//	int* pa = &a;//�õ��ĵ���a���ĸ��ֽ��е�һ���ֽڵĵ�ַ
//	*pa = 20;
//
//	return 0;
//}




//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//
//	printf("%d\n", sizeof(pa));  //8
//	printf("%d\n", sizeof(pc));	 //8
//	printf("%d\n", sizeof(pf));  //8
//
//	return 0;
//}

//ָ�����͵�����
//1.ָ�����;����ˣ�ָ������õ�Ȩ���ж�����ͽ�����4���ֽڣ��ַ���1���ֽڣ�
//2.ָ������;����ˣ�ָ����ǰ���������һ���ж����롣
// 
//

//int main()
//{
//	//int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//	//char* pc = &a;
//	//*pc = 0;
//	//return 0;
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1); //+1����4���ֽ�
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);//+1����1���ֽ�
//
//
//}




//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;     //��ʵ���±�Ϊi�ĵ�ַ
//		//һ������4���ֽ�
//	}
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;     //һ��ֻ����һ���ֽ�charָ��
//	}
//	return 0;
//}







