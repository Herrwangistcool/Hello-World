/*The distance of a marathon in kilometers.*/
#include<stdio.h>
int main(void)
{
	int miles, yards;
	float kilometers;
	
	miles=26;
	yards=385;
	kilometers=1.609*(miles+yards/1760.0);//转化为公里
	printf("A marathon is %f kilometers.\n",kilometers);
	
	return 0;
}
