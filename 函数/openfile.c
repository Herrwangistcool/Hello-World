#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	if((fp=fopen("E:\\DevC++\\e9_1.c","rt"))==NULL){
		printf("Cannot open file strike any key exit!");
		getchar();
		exit(1);
	}
	ch=fgetc(fp);
	while(ch!=EOF){
		putchar(ch);
		ch=fgetc(fp);
	}
	fclose(fp);
	return 0;
 } 
