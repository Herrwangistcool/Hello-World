#include<stdio.h>
#include<ctype.h>
int main()
{
	char c,c1,c2,top;
	int i;
	printf("input a character:\n");
	c=getchar();
	if(c>='A'&&c<='Z') top='A';				/*条件c在A和Z之间*/
	else if(c>='a'&&c<='z') top='a';		/*条件c在a和c之间*/ 
	else top='\0';
	if(top)
	{
		for(c1=top;c1<=c;c1++)				/*控制输出的行数*/ 
		{
			for(i=1;i<=40-2*(c1-top);i++)	/*控制每行输出的空格行数*/ 
				printf(" ");
			for(c2=top;c2<=c1;c2++)			/*控制每行输出的正序字母*/ 
				printf("%2c",c2);
			for(c2=c1-1;c2>=top;c2--)		/*控制每行输出的逆序字母*/ 
				printf("%2c",c2);
			printf("\n");
		}
	}
}
 
