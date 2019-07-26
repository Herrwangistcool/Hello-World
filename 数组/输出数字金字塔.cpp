#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=9;i++)
	{
		for(k=i;k<9;k++)		/*控制输出的行数*/
			printf("  ");		/*控制每行输出的空格数*/ 
		for(j=1;j<=i;j++)
			printf("%2d",j);	/*控制每行输出的正序数*/ 
		for(j=i;j>1;j--)
			printf("%2d",j-1);	/*控制每行输出的逆序数*/ 
		printf("\n");
	}
} 
