#include<stdio.h>
#include<string.h>
int main()
{
	int a[10],i,min;
	printf("������10������");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	min=a[0];
	for(i=1;i<10;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	printf("%d",min);
	return 0;
}
