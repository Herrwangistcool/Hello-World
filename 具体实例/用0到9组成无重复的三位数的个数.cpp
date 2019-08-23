/*求用0~9这10个数可以组成多少无重复的3位数。*/ 
#include<stdio.h>
int main(){
	int x,a,b,c,num=0;		
	/*a,b,c代表百位，十位，个位；
	num存放满足条件的数的个数，注意num要赋初值*/ 
	for(x=100;x<999;x++){
		a=x/100;
		b=x/10%10;
		c=x%10;
		if(a!=b&&a!=c&&b!=c){	//判断每一位上的数字是否各不相同 
			num++;
			printf("%5d",x);
		}
	}
	printf("\nnumber=%d",num);
	return 0;
} 
