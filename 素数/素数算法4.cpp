/***Autor: Daniel                  **/
/***Titel: Find prime numbers      **/
/*Methode: If the number can be divided by the known
 prime number, it`s not a Prime number. */

#include<stdio.h>

int isPrime(int i, int Primes[], int count);
int main()
{
	const int number=100;
	int Primes[number]={2};
	int count=1;
	int i=3;  //数组中已有2，所以给i下一个素数3 
	while(count<number)
	{
		if(isPrime(i,Primes,count))
		{
			Primes[count++]=i;//给数组Primes赋值 
		}
		i++;
	} 
	
	for(i=0;i<number;i++)
	{
		printf("%d",Primes[i]);
		if((i+1)%5) printf("\t");//数组下标比实际位置少1，所以输出行要加1 
		else printf("\n");
	}
	return 0;
}

int isPrime(int i, int Primes[], int count)
{
	int ret=1;
	int x;
	for(x=0;x<count;x++)//不超过数组中的已有素数的个数 
	{
		if(i%Primes[x]==0)//若Primes能被i整除，则不是素数 
		{
			ret=0;
			break;
		}
	}
	return ret;
}
