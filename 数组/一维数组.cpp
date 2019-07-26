#include<stdio.h>
#include<Windows.h>
int main()
{
	int a[] = { 1,2,3,4,5 };
	int i, x=0,j,y=0;
	for (i = 0; i < 5; i++)
	{
		x++;
		printf("%d\t", a[x]);
	}
	char c[5] = { 'a','b','c' };
	for (j = 0; j < 5; j++)
	{
		y++;
		printf("%c\n", c[y]);
	}
	system("pause");
}
