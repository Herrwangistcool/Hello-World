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
	int i=3;  //����������2�����Ը�i��һ������3 
	while(count<number)
	{
		if(isPrime(i,Primes,count))
		{
			Primes[count++]=i;//������Primes��ֵ 
		}
		i++;
	} 
	
	for(i=0;i<number;i++)
	{
		printf("%d",Primes[i]);
		if((i+1)%5) printf("\t");//�����±��ʵ��λ����1�����������Ҫ��1 
		else printf("\n");
	}
	return 0;
}

int isPrime(int i, int Primes[], int count)
{
	int ret=1;
	int x;
	for(x=0;x<count;x++)//�����������е����������ĸ��� 
	{
		if(i%Primes[x]==0)//��Primes�ܱ�i�������������� 
		{
			ret=0;
			break;
		}
	}
	return ret;
}
