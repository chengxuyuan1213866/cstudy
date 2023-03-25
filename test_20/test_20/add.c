#define _CRT_SECURE_NO_WARNINGS 1

//2
//定义全局变量
//static 修饰以后在这个工程的其他文件中声明后也无法使用
//static修饰全局变量使得这个全局变量只能在自己所在的源文件内部使用，其他源文件不能使用！
//static int g_val = 2022;

//3函数
//static修饰
static int Add(int x,int y)
{

	return x + y;
	
}