/*����5���ַ������ҳ����������ַ���*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[5][10];
	char Max[10];
	int i;
	for(i=0;i<5;i++)
	{
		gets(str[i]);
	}
	strcpy(Max,str[0]);
	for(i=0;i<5;i++)
	{
		if(strcmp(Max,str[i])<0)
		strcpy(Max,str[i]);
	}
	printf("����ַ���Ϊ��%s",Max);
	return 0;
}
