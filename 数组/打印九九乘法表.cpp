#include<stdio.h> 
int main()
{
	int i,j,k;
	for(i=1;i<=9;i++)						/*��i��������*/
	{
		for(k=1;k<i;k++)
			printf("        ");				/*ÿһ�����8���ո�*/ 
		for(j=i;j<=9;j++)
			printf("%d*%d=%-4d",i,j,i*j);	/*ÿ�������ʽ��*/ 
		printf("\n");
	}
}
