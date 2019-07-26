/*用"%s"的方式输入字符串给字符数组赋值时，输入的字符串长度应小于数组长度*/ 
#include<stdio.h>
int main()
{
	char ch[6];
	scanf("%s",ch);
	printf("%s",ch);//用"%s"的方式输出字符数组时，printf中的输出项参数用数组名，而不是数组元素 
	return 0;
 } 
