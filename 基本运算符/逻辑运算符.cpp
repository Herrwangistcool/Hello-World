#include<stdio.h>

int main()
{
	char c='k';
	int i=1, j=2, k=3;
	float x=3e+5, y=0.85;
	printf("%d, %d\n",!x*!y,!!!x);//逻辑非为单目运算符，优先级高于算术运算符 
	printf("%d, %d\n",x||i&&j-3,i<j&&x<y); //逻辑运算符右结合，优先级低于关系运算 
	
}
