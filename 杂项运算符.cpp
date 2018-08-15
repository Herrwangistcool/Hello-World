#include<stdio.h>
main()
{
	int a=4;
	short b;
	double c;
	int* ptr;
	
	/*sizeof运算符实例*/
	printf("Line - 变量a的大小 = %1u\n",sizeof(a));
	printf("Line - 变量b的大小 = %1u\n",sizeof(b));
	printf("Line - 变量c的大小 = %1u\n",sizeof(c));
	
	/*&和*运算符实例*/
	ptr = &a; /*'ptr'现在包含'a'的地址*/
	printf("a的值是 %d\n",a);
	printf("*ptr是 %d\n",*ptr);
	
	/*三元运算符实例*/
	a=10;
	b=(a==1)?20:30;
	printf("b的值是%d\n",b);
	
	b=(a==10)?20:30;
	printf("b的值是%d\n",b); 
}
