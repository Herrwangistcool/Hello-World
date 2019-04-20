#include<stdio.h>
long f(int n);

int main()
{
	int n;
	scanf("%d",&n);//从控制台输入n值 
	printf("%d!=%ld",n,f(n));
	return 0; 
}

long f(int n)
{
	long r;
	if(n==1)
		r=1;
	else
		r=n*f(n-1);//调用f（n-1）来求（n-1）！ 
	return r;
}

