#include<stdio.h>
#include<math.h>
/*�õ������󷽳�x=a^1/2�ĸ���������ʽΪ��Xn+1=1/2(Xn+a/Xn)��������Ϊ10^-8��*/ 
int main(){
	float a,x0,x1;
	printf("enter a postive number:");
	scanf("%f",&a);				//����a�� 
	x0=a/2;						//�������ĳ�ֵx0��Ϊa/2�� 
	x1=(x0+a/x0)/2;				//���ݵ�����ʽ�����x1�� 
	do{
		x0=x1;
		x1=(x0+a/x0)/2;
	}while(fabs(x0-x1)>1e-8);	//ѭ������ 
	
	printf("the square root of %5.2f\n",x1);
	return 0;
}
