#include<stdio.h>
#include<string.h> 
int main()
{
/*	char str[20]="China";
	puts(str);//形式：puts（字符数组）；功能：将一个字符串输出到控制台上 
*/

/*	char str[20];
	gets(str);//形式：gets（字符数组）；功能：输入一个字符串到字符数组中
*/

/*	char str1[30]="hello ";
	char str2[]="world";
	printf("%s",strcat(str1,str2));//形式：strcat（字符数组1，字符数组2）；功能：把两个字符串连接起来，把字符串2接到字符串1的后面，结果放在字符数组1中		
*/

/*	char str1[10], str2[]="China";
	strcpy(str1,str2);
	printf("%s",str1);//形式：strcpy（字符数组1，字符数组2）；功能：将字符串2复制到字符数组1中 
*/	

/*	int n;
	n=strcmp("China","Korea"); //形式：strcmp（字符串1，字符串2）；功能：比较字符串1和字符串2的关系，当字符串1>字符串2时，返回正数；当字符串1=字符串2时，返回0；当字符串1<字符串2时，返回负数。 
	printf("%d",n);//字符串进行比较时，其实比较的时字符的ASCII码值。 
	return 0;
*/
	char str[10]="China";
	printf("%d",strlen(str));//形式：strlen（字符数组）；功能：返回字符串长度，即返回字符数组中有效字符个数，不包括‘\0’ 
 } 
