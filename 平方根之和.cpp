#include<stdio.h>
#include<math.h>
float sum(int);//��ƽ���������� 
int main()
{
	int i;
	scanf("%d",&i);//������������ 
	printf("%f",sum(i));
	return 0;
}
float sum(int x)
{
	int i;
	float r=0;
	for(i=1;i<=x;i++)
		r=r+sqrtf(i);
	return r;	
}
