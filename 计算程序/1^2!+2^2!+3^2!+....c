#include<stdio.h>
long func1(int);
long func2(int);
int main()
{
	int i, n;
	long s;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		s=s+func1(i);
	printf("%ld",s);
	return 0;
}
long func1(int x)
{
	long r;
	int k;
	k=x*x;
	r=func2(k);
	return r;
}
long func2(int x)
{
	long r=1;
	int i;
	for(i=1;i<=x;i++)
		r=r*i;
	return r;
}
