#include<stdio.h>
int main()
{
	int i, j, tem, k, a[6];
	printf("输入6个整数：");
	for(i=0;i<=5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<=4;i++)
	{
		k=i;
		for(j=i+1;j<=5;j++)
		{
			if(a[j]>a[k])
			{
				k=j;
			}
		}
		if(i!=k)
		{
			tem=a[i];
			a[i]=a[k];
			a[k]=tem;
		}
	}
	printf("排序后的结果：");
	for(i=0;i<=5;i++)
		printf("%d\t",a[i]); 
	return 0; 
}
