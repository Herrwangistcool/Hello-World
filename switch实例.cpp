#include<stdio.h>
int A=10;
int B=20;
char buy;
int sum, number;
int main()
{
	printf("\n以下是本店商品极价格:\n A商品价格为%d元/个;\n B商品价格为%d元/个。\n",A,B);
	printf("\n请输入你需要的商品(A或B):");
	scanf("%c",&buy);
	printf("请输入所需的量:");
	scanf("%d",&number);
	sum=(buy==A)?A*number:B*number;
	printf("\n您需要的%d个%c商品总共%d元\n",number,buy,sum);
	return 0;
}
