#include<stdio.h>
int main()
{
	int n,i=0;
	printf("������һ��������1000������");
	scanf("%d",&n);
	for(i=0;;i++)
	{
		if(n==1) break;
		if(n%2==0)
		n=n/2;
		else
		n=(3*n+1)/2;
	}
	printf("%d",i);
	return 0;
}
