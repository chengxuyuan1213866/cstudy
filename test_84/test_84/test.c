#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�ṹ��
//���飺��һ����ͬ�������͵ļ���
//�ṹ����һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���
//
//

struct B
{
	char c;
	short s;
	double d;
};

//����
struct Stu
{
	//��Ա����
	struct B sb;
	char name[20]; //����
	int age;       //����
	char id[20];   //ѧ��
}s1, s2;  //s1,s2Ҳ�ǽṹ�����
//s1,s2��ȫ�ֱ���
//
//
//
//int main()
//{
//	//����
//	//s�Ǿֲ�����
//	struct Stu s = { {'a',20,3.14}, "����", 18, "20201301078"};  //�ṹ������ĳ�ʼ�� ��struct B�ṹ�������Ƕ�׳�ʼ����
//	//. ->    �ṹ���Ա�ķ���
//	//printf("%c\n", s.sb.c);    //�ַ���%c
//	//printf("%s\n", s.id);
//	struct Stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);
//	return 0;
//}

//�ṹ���Ա�����ͣ������Ǳ��������顢ָ�롢�����������ṹ�塣

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
	struct Stu s = { {'a',20,3.14}, "����", 18, "20201301078" };
	//дһ��������ӡs������
	print1(s);   //��ֵ����  ���˷ѿռ䣩   ���Ӱ�ȫ
	print2(&s);	 //��ַ����  ���ö��⿪�ٿռ�   ֻ�ô���һ��ָ���С�Ŀռ�(32λ�����4���ֽ�64λ8���ֽ�)
	//�����ṹ�崫�ε�ʱ�򣬴��ṹ��ĵ�ַ
	return 0;
}

//����ջ֡�Ĵ���������



















