#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
//��ϰC���Դ�ӡһ�������


//��ӡ1-100֮��������

int main()
{
	srand((unsigned int)time(NULL));
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		printf("%d\n", rand()%100);
	}
	return 0;
}





















