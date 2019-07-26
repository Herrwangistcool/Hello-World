#include<stdio.h>

int main()
{
	int m,n;
	float x,y;
	x=2.5; y=4.7;
	m=(int)(x+y);
	n=(int)x+m/3;
	m=n%4;
	x=x+y;
	printf("m=%d, n=%d, x=%f, y=%f\n",m, n, x, y);	
} 
