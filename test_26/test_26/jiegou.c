#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//-----------------------结构体-------------------------------------
//描述复杂对象
// 结构体可以让c语言创建新的类型出来
//

//创建一个学生类型
struct Stu
{
	char name[20];//成员变量
	int age;
	double score;
};
struct Book
{
	char name[20];
	float price;
	char id[30];
};
int main()
{
	struct Stu s = { "张三",20,85.5 };//结构体创建和初始化
	printf("1:%s %d %lf\n", s.name, s.age, s.score); //结构体变量.成员变量
	struct Stu* ps = &s;
	printf("2:%s %d %lf\n",(*ps).name, (*ps).age,(*ps).score);
	//->使用规则        结构体指针->成员变量名

	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);
	return 0;
}









