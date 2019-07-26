/*指针加1，实际上加的是sizeof*/ 
/*如果指针不是指向一片连续分配的空间，如数组，则这种运算没有意义*/
#include<stdio.h>

int main(void)
{
	char ac[]={0,1,2,3,4,5,6,7,8,9,};
	char *p=ac;
	char *p1=&ac[5]; 
	printf("p=%p\n",p);//sizeof(cahr)为1 
	printf("p+1=%p\n",p+1);
	printf("*(p+1)=%d\n",*(p+1));
	printf("p1-p=%d\n",p1-p);//指针相减 
	/*
	*p->ac[0]
	*(p+1)->ac[1] 
	*/
	int ai[]={0,1,2,3,4,5,6,7,8,9,};
	int *q=ai;
	int *q1=&ai[6]; 
	printf("q=%p\n",q);//sizeof(int)为4 
	printf("q+1=%p\n",q+1);
	printf("*(q+1)=%d\n",*(q+1));
	printf("q1-q=%d\n",q1-q);//指针相减等于地址之差除以sizeof；q1-q=24/4 
	
	return 0;
}
