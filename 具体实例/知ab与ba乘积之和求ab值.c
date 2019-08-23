/*假设数学上的等式ab*ba=1855成立，那么求a、b可能求什么值，其中a、b为1位数*/ 
#include<stdio.h>
int main(){
	int a,b;
	for(a=0;a<=9;a++)					//控制a的取值范围为0~9; 
		for(b=0;b<=9;b++)				//控制b的取值范围为0~9;
			if((a*10+b)*(b*10+a)==1855)	//判断等式 ab*ba=1855是否成立 
				printf("a=%d,b=%d\n",a,b);
	return 0;
} 
