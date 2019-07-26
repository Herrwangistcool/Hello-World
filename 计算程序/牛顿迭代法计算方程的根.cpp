#include<stdio.h>
#include<math.h>
int main()
{
	double x1, x0, fd, f1;
	x0=1.5;
	do{
		x1=x0;
		f1=((2*x1-4)*x1+3)*x1-6;
		fd=(6*x1-8)*x1+3;
		x0=x1-f1/fd;
	}while(fabs(x1-x0)>1e-5);
	printf("The root is %lf\n",x0);
 } 
