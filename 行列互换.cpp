#include<stdio.h>
int main()
{
	int ch1[2][3]={1,2,3,4,5,6},ch2[3][2];
	int i,temp,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		ch2[i][j]=ch1[j][i];	
		}	
	for(i=0;i<3;i++)
	{
	
		for(j=0;j<2;j++)
		{
			printf("%d",ch2[i][j]);
		}
		printf("\n");
	}
	return 0;
} 
