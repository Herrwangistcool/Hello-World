#include<stdio.h>
long f(int n);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",f(n));
	return 0;
}
long f(int n)
{
	long r;
	if(n==1)
	r=1;
	else
	r=n+f(n-1);
	return r;
}
