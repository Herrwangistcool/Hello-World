#include<stdio.h>
#include<math.h>
/*������bΪ�׵�x�Ķ���������e��x����*/
/*����b��ƽ����*/ 
int main()
{
	float arc;
	float f,b,x;
	int i;
	printf("input arc");
	scanf("%f",&arc);
	f=sin(arc);//������ֵ 
	printf("sin(%f)=%f.\n",arc,f);
	printf("input value x and b;");
	scanf("%f%f",&x,&b);
	f=log(x)/log(b);//����bΪ�׵�x�Ķ��� 
	printf("log%f(%f)=%f\n",b,x,f);
	f=sqrt(x);
	printf("sqrt(%f)value is %f\n",x,f);
	i=floor(x);//�󲻴���x���������
	printf("floor(%f)=%d\n",x,i); 
}
