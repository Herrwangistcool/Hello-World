#include<stdio.h>
int count(int n); 
int main()
{
	int n, m=1, sum=0, num;//sum为各位数字之和 
	int i,k=1;
	int j=1;
	printf("输入一个正整数！\n");
	scanf("%d", &n);

	for(i=0;i<count(n);i++)
	{
		
		j=j*10;
		sum+=(n%j)/(j/10);//求各位数字的和 
	}

	for(i=1;i<count(sum);i++)
	{
		k*=10;
	}
	
	for(i=0;i<count(sum);i++)
	{
		num=(sum/k)%10;
		switch(num)
		{
			case 1:printf("yi");break;
			case 2:printf("er");break;
			case 3:printf("san");break;
			case 4:printf("si");break;
			case 5:printf("wu");break;
			case 6:printf("liu");break;
			case 7:printf("qi");break;
			case 8:printf("ba");break;
			case 9:printf("jiu");break;
			case 0:printf("ling");break;
			default:printf("ERROR!");
		}
		if(i<count(sum)-1)
			printf(" ");
		//printf("%d ",num);
		k=k/10;
	}

	return 0;
 } 
 
 int count(int n)//统计位数 
 {
 	int count=0;
 	while(n!=0)
 	{
 		n/=10;
 		count++;
	 }
	 return count;
 }
