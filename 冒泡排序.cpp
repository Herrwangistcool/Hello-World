#include<stdio.h>
int main()
{
	int i,j,temp,a[6];
	printf("请输入6个整数！");
	for(i=0;i<6;i++)
		scanf("%d",&a[i]);//输入6个整数 
	for(i=0;i<=4;i++)//外循环5次 
	{
		for(j=0;j<=4-i;j++)//每完成一次外循环，则需要的内循环次数减一 
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];//temp用来暂存数值 
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("排序结果：");
	for(i=0;i<=5;i++)
		printf("%d\t",a[i]);
	return 0; 
}
