#include<stdio.h>
/*int main()
{
	int i=0;
	int count=0;
	for(i=100;i<=200;i++)//����100-200������ 
	{
		int j=0;
		for(j=2;j<=i;j++)//����2���䱾��ǰ�����һ������ 
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
		for(j=2;j<=sqrt(i);j++)//�����ɶԳ��֣�����������д��a*b����ʽ��a,b֮�����һ��С��ab֮���Ŀ�ƽ������ 
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
	for(i=101;i<=200;i+=2)//����ż������������������ֻ�������� 
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
