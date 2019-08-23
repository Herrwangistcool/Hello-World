#include<stdio.h>
#include<math.h>
/*用迭代法求方程x=a^1/2的跟，迭代公式为：Xn+1=1/2(Xn+a/Xn)，误差控制为10^-8。*/ 
int main(){
	float a,x0,x1;
	printf("enter a postive number:");
	scanf("%f",&a);				//输入a； 
	x0=a/2;						//将迭代的初值x0设为a/2； 
	x1=(x0+a/x0)/2;				//根据迭代公式计算出x1； 
	do{
		x0=x1;
		x1=(x0+a/x0)/2;
	}while(fabs(x0-x1)>1e-8);	//循环条件 
	
	printf("the square root of %5.2f\n",x1);
	return 0;
}
