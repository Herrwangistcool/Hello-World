/*此函数中定义了函数f，其中的变量j说明为自动变量并赋初始值为0. 
当main函数中多次调用f时，j均赋值为0，故每次输出的值均为1.*/ 

#include<stdio.h>
int main()
{
	int i;
	void f();                 //函数说明 
	for (i = 1; i <= 5; i++)
		f();                  //函数调用 

	return 0;
	
}
void f()                      //函数定义 
{
	auto  int j = 0;
	++j;
	printf("%d\n", j);
}
