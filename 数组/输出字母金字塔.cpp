#include<stdio.h>
#include<ctype.h>
int main()
{
	char c,c1,c2,top;
	int i;
	printf("input a character:\n");
	c=getchar();
	if(c>='A'&&c<='Z') top='A';				/*����c��A��Z֮��*/
	else if(c>='a'&&c<='z') top='a';		/*����c��a��c֮��*/ 
	else top='\0';
	if(top)
	{
		for(c1=top;c1<=c;c1++)				/*�������������*/ 
		{
			for(i=1;i<=40-2*(c1-top);i++)	/*����ÿ������Ŀո�����*/ 
				printf(" ");
			for(c2=top;c2<=c1;c2++)			/*����ÿ�������������ĸ*/ 
				printf("%2c",c2);
			for(c2=c1-1;c2>=top;c2--)		/*����ÿ�������������ĸ*/ 
				printf("%2c",c2);
			printf("\n");
		}
	}
}
 
