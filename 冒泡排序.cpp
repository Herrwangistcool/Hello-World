#include<stdio.h>
int main()
{
	int i,j,temp,a[6];
	printf("������6��������");
	for(i=0;i<6;i++)
		scanf("%d",&a[i]);//����6������ 
	for(i=0;i<=4;i++)//��ѭ��5�� 
	{
		for(j=0;j<=4-i;j++)//ÿ���һ����ѭ��������Ҫ����ѭ��������һ 
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];//temp�����ݴ���ֵ 
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("��������");
	for(i=0;i<=5;i++)
		printf("%d\t",a[i]);
	return 0; 
}
