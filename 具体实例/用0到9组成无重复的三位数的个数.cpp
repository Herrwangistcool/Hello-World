/*����0~9��10����������ɶ������ظ���3λ����*/ 
#include<stdio.h>
int main(){
	int x,a,b,c,num=0;		
	/*a,b,c�����λ��ʮλ����λ��
	num����������������ĸ�����ע��numҪ����ֵ*/ 
	for(x=100;x<999;x++){
		a=x/100;
		b=x/10%10;
		c=x%10;
		if(a!=b&&a!=c&&b!=c){	//�ж�ÿһλ�ϵ������Ƿ������ͬ 
			num++;
			printf("%5d",x);
		}
	}
	printf("\nnumber=%d",num);
	return 0;
} 
