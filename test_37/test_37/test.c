#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//strlen   strcmp
#include <Windows.h>
#include <stdlib.h>
#include <time.h >


//从两边向中间打印
//welcome to bit!!!!
//w################!
//we##############!!
//...

//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);  //睡眠一秒，单位是毫秒
//		system("cls"); //清空屏幕
//		left++;
//		right--;
//	} 
//	printf("%s\n", arr2);
//	return 0;
//}
//E:\Cfile\test_37\test_37\test.c(16,27): warning C4267: “初始化”: 从“size_t”转换到“int”，可能丢失数据
//出现上面的错误是由于平台的原因造成的，在64位的环境下size_t的长度和int不一致造成的。

//模拟用户登录密码，最多三次，三次后推出


//int main()
//{
//	int i = 0;
//	//假设正确密码是一串字符
//	char password[20] = { 0 };
//
//	for ( i = 0; i < 3; i++)
//	{
//		printf("请输入密码>");
//		scanf("%s", password);  //数组名本来就是地址，所以用scanf不用取地址
//		//if (password == "123456")  比较首字符的地址
//		//两个字符串的比较不能使用==，应该使用strcmp
//		if (strcmp(password,"123456") == 0)
//		{
//			printf("登录成功");
//			break;
//		}
//		else
//			printf("输入错误，请重新输入\n");
//	}
//	if (i == 3) {
//		printf("三次密码都输错，推出登录");
//	}
//	return 0;
//}
   

//猜数字游戏的实现
//1.自动产生1-100之间随机数
// 2.猜数字
//  猜对了，恭喜你，游戏结束
//	猜错了，告诉你猜大还是猜小了，直到猜对为止
// 3.游戏可以一直玩，除非推出游戏
// 
//
//
void menu()
{
	printf("************************************\n");
	printf("*************  1.paly  *************\n");
	printf("*************  0.exit  *************\n");
	printf("************************************\n");
}

//RAND_MAX
void game()
{
	//猜数字游戏的实现
	//1.生成随机数
	//rand函数返回一个0-32767之间的数字，但是不够随机
	//srand括号里面需要一个一直在变的值，传入时间(时间戳)
	
	int ret = rand()%100+1;  //%100的余数是0-99，然后+1，范围就是1-100
	//printf("%d\n", ret);
	//2.猜数字
	int guess = 0;
	while (1)
	{
		printf("猜数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess>ret)
		{
			printf("猜打了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));    //强制类型转换
	do
	{
		menu();//打印菜单
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("猜数字\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误,重新输入\n");
			break;
		}
	} while (input);
	return 0;
}






















