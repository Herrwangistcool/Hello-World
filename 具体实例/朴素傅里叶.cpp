#include<stdio.h>
float h(int a[10][5],int b[],int *H);
int main()
{
	int i,j;
	float H=0,C=0;
	float PT,PH=6.0;
	PT=6.0/10.0;//P(T)=嫁的数量/样本数量 
	int b[4];
	int a[10][5]=
	{
	{1,0,0,0,0},
	{1,0,0,1,0},
	{1,1,0,1,1},
	{1,1,1,0,1},
	{1,1,2,1,1},
	{1,1,0,0,0},
	{0,1,2,1,1},
	{0,1,0,1,0},
	{0,1,1,1,1},
	{0,0,1,1,1},
	};

	for(i=0;i<4;i++)
		scanf("&d\n",b[i]);
	
	
	//PH=H;
	h(a,b,&H);
	printf("%f\n",PH);
	
	
	return 0;
 } 
 
 float h(int a[10][5],int b[],int *H)
 {
 	int i;

 	for(i=0;i<10;i++)
	{
		if(a[i][0]==b[0])
		{
			H++;
		}
			
	} 
	return 0;
 }
