/***Autor: Daniel                  **/
/***Titel: Find prime numbers      **/
/*Methode: If the number can be divided by the known
 prime number, it`s not a Prime number. */

#include<stdio.h> 
#include<math.h> 
int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes);
int main()
{
	const int number=100;
	int prime[number]={2};
	int count=1;
	int i=3;
	while(count<number)
	{
		if(isPrime(i,prime,count))
		{
			prime[count++]=i;//把i赋到prime表中 
		}
		i++;
	}
	for(i=0;i<number;i++)
	{
		printf("%d",prime[i]);
		if((i+1)%5)
		printf("\t");
		else
		printf("\n");
	}
	return 0;
}

int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes)
{
	int ret=1;
	int i;
	for(i=0;i<numberOfKnownPrimes;i++)
	{
		if(x%knownPrimes[i]==0)//若x可被已知素数整除则不是素数 
		{
			ret=0;
			break;
		}
	}
	return ret;
}

