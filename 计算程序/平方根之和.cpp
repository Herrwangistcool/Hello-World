#include<stdio.h>
#include<math.h>
float sum(int);//有平方根非整型 
int main()
{
	int i;
	scanf("%d",&i);//输入整数个数 
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
