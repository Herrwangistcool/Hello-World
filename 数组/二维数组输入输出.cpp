#include<stdio.h>
int main()
{
	int i,j,num[2][3];
	printf("ÇëÊäÈë6¸öÊı£º");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",num[i][j]);
		}
		printf("\n");
	}
	return 0;
}
