/***Autor: Daniel                  **/
/***Titel: Find prime numbers      **/
/***Methode: Test the numbers from **/
/***2 to x-1, look whether these   **/
/***numbers can be divided with    **/
/***no remainder.                  **/
#include<stdio.h> 
int isPrime(int x);

int main()
{
	int x;
	scanf("%d",&x);
	if(isPrime(x))
	{
		printf("%d是素数\n",x);
	}
	else
	{
		printf("%d不是素数\n",x);
	}
	return 0;
}

int isPrime(int x)
{
	int ret=1;
	int i;
	if(x==1) ret=0;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
			ret=0;
			break;
		}
	}
	return 0;
}
