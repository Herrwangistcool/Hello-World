#include<stdio.h>
#include<math.h>
/*计算以b为底的x的对数，计算e的x次幂*/
/*计算b的平方根*/ 
int main()
{
	float arc;
	float f,b,x;
	int i;
	printf("input arc");
	scanf("%f",&arc);
	f=sin(arc);//求正弦值 
	printf("sin(%f)=%f.\n",arc,f);
	printf("input value x and b;");
	scanf("%f%f",&x,&b);
	f=log(x)/log(b);//求以b为底的x的对数 
	printf("log%f(%f)=%f\n",b,x,f);
	f=sqrt(x);
	printf("sqrt(%f)value is %f\n",x,f);
	i=floor(x);//求不大于x的最大整数
	printf("floor(%f)=%d\n",x,i); 
}
