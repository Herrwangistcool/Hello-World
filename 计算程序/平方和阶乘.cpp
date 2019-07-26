#include<stdio.h>
long func1(int);
long func2(int);
int main()
{
	int i;
	long s=0;
	for(i=1;i<=3;i++)
		s=s+func1(i);
	printf("s=%ld\n",s);
	return 0;
}
long func1(int x)
{
	int k;
	long r;
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
