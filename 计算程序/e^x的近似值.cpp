#include <stdio.h>
#include <math.h>
double fun(double x);
int factorial(int n);
#define LIMIT 0.000000001
	
int main () 
{
	double x;
	while(scanf("%lf",&x)!=EOF)
	{
		printf("%8lf\n",fun(x));
	}
	return 0;
}

double fun(double x)
{
	double s=1, k=1, t;
	int n=1;
	while(1)
	{
		k=k*x;
		t=k/factorial(n);
		s=s+t;
		n++;
		if(t<LIMIT)
			break;
	}
	return s;
}

int factorial(int n)
{
	int f,i;
	f=1;
	for(i=i;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
