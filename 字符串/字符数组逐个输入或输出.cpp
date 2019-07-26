/*sizeof(ch)用于计算字符数组的长度，输入字符不能超过数组定义的长度，如果超过了，则超过部分不会存入数组*/ 
#include<stdio.h>
int main()
{
	int i;
	char ch[6];
	for(i=0;i<sizeof(ch);i++)//利用循环依次输入输出数组元素 
	{
		scanf("%c",&ch[i]);
		printf("%c",ch[i]);
	}
	return 0;
}
