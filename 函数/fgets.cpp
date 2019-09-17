#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char str[11];
	if((fp=fopen("string","rt"))==NULL)
	{
		printf("Cannot open file strike any key exit!");
		getchar();
		exit(1); 
	}
	fgets(str,11,fp);
	printf("%s",str);
	fclose(fp);
	
	return 0;
}
