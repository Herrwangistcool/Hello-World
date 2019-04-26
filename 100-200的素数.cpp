#include<stdio.h>
/*int main()
{
	int i=0;
	int count=0;
	for(i=100;i<=200;i++)//遍历100-200的数字 
	{
		int j=0;
		for(j=2;j<=i;j++)//除以2到其本身前面的那一个数字 
		{
			if(i%j==0)
			{
				break;
			}	
		}
		if(i==j)
		{
			count++;
			printf("%d\n",i);	
		}	
	}
	printf("\ncount=%d\n",count);
	return 0;	
} */
/*#include<math.h>
int main()
{
	int i=0;
	int count=0;
	for(i=100;i<=200;i++)
	{
		int j=0;
		for(j=2;j<=sqrt(i);j++)//因数成对出现，非素数可以写成a*b的形式，a,b之间必有一个小于ab之积的开平方根。 
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(j>sqrt(i))
		{
			count++;
			printf("%d\n",i);
		}
	}
	printf("count=%d\n",count);
	return 0;
}*/
#include<math.h>
int main()
{
	int i=0;
	int count=0;
	for(i=101;i<=200;i+=2)//所有偶数都不是素数，所以只遍历奇数 
	{
		int j=0;
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(j>sqrt(i))
		{
			count++;
			printf("%d\n",i);
		}
	}
	printf("\ncount=%d\n",count);
	return 0;
}
