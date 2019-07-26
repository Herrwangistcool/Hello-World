#include<stdio.h> 
int main()
{
	int i,j,k;
	for(i=1;i<=9;i++)						/*用i控制行数*/
	{
		for(k=1;k<i;k++)
			printf("        ");				/*每一项输出8个空格*/ 
		for(j=i;j<=9;j++)
			printf("%d*%d=%-4d",i,j,i*j);	/*每行输出的式子*/ 
		printf("\n");
	}
}
