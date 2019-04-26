#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,k;
	printf("please input a number:");
	scanf("%d",&n);
	if(n<=1)
		printf("This is not a prime\n");
	else
	{
		k=sqrt(n);
		for(i=2;i<=k;i++)
		{
			if(n%i==0)
			break;
		}
		if(i>=k+1)
			printf("This is a prime.\n");
		else
			printf("This is not a prime.\n");
	}
	return 0;
}
