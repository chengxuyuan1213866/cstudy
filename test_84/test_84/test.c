#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//结构体
//数组：是一组相同数据类型的集合
//结构：是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量
//
//

struct B
{
	char c;
	short s;
	double d;
};

//类型
struct Stu
{
	//成员变量
	struct B sb;
	char name[20]; //名字
	int age;       //年龄
	char id[20];   //学号
}s1, s2;  //s1,s2也是结构体变量
//s1,s2是全局变量
//
//
//
//int main()
//{
//	//对象
//	//s是局部变量
//	struct Stu s = { {'a',20,3.14}, "张三", 18, "20201301078"};  //结构体变量的初始化 （struct B结构体变量的嵌套初始化）
//	//. ->    结构体成员的访问
//	//printf("%c\n", s.sb.c);    //字符用%c
//	//printf("%s\n", s.id);
//	struct Stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);
//	return 0;
//}

//结构体成员的类型：可以是标量、数组、指针、甚至是其他结构体。

void print1(struct Stu t)
{
	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
}
void print2(struct Stu* ps)
{
	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
}
int main()
{
	struct Stu s = { {'a',20,3.14}, "张三", 18, "20201301078" };
	//写一个函数打印s的内容
	print1(s);   //传值调用  （浪费空间）   更加安全
	print2(&s);	 //传址调用  不用额外开辟空间   只用传递一个指针大小的空间(32位计算机4个字节64位8个字节)
	//！！结构体传参的时候，传结构体的地址
	return 0;
}

//函数栈帧的创建和销毁



















