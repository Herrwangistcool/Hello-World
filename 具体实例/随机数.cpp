#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int a,b;
	int sum;
	a=rand()%100;
	srand(time());
	
	b=rand()%100;
	printf("%d+%d= ",a,b);
	scanf("%d",&sum);
	if(sum==a+b)
		printf("Answer is true\n");
	else
		printf("Answer is false\n");
 } 
