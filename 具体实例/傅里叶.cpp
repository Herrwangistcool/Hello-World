#include<stdio.h>
int main()
{
	int i,j;
	float H=0,C=0;
	float PT,PH=6.0;
	PT=6.0/10.0;//P(T)=嫁的数量/样本数量 
	int b[4];
	int a[10][5]={{1,0,0,0,0},{1,0,0,1,0},{1,1,0,1,1},{1,1,1,0,1},{1,1,2,1,1},{1,1,0,0,0},{0,1,2,1,1},{0,1,0,1,0},{0,1,1,1,1},{0,0,1,1,1}};
	for(i=0;i<4;i++)
		scanf("%d",&b[i]);
	
		
	for(i=0;i<10;i++)
		if(a[i][0]==b[0])
			H++;    
	
	printf("%f\n",H);
	printf("PH=%f\n",H/6.0);

	for(i=0;i<10;i++)
	{
		if(a[i][1]==b[1])
		{
			C++;
		}
	} 
	printf("PC=%f\n",C/6.0);
	
	return 0;
}

