#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=9;i++)
	{
		for(k=i;k<9;k++)		/*�������������*/
			printf("  ");		/*����ÿ������Ŀո���*/ 
		for(j=1;j<=i;j++)
			printf("%2d",j);	/*����ÿ�������������*/ 
		for(j=i;j>1;j--)
			printf("%2d",j-1);	/*����ÿ�������������*/ 
		printf("\n");
	}
} 
