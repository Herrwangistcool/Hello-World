#include<stdio.h>
int A=10;
int B=20;
char buy;
int sum, number;
int main()
{
	printf("\n�����Ǳ�����Ʒ���۸�:\n A��Ʒ�۸�Ϊ%dԪ/��;\n B��Ʒ�۸�Ϊ%dԪ/����\n",A,B);
	printf("\n����������Ҫ����Ʒ(A��B):");
	scanf("%c",&buy);
	printf("�������������:");
	scanf("%d",&number);
	sum=(buy==A)?A*number:B*number;
	printf("\n����Ҫ��%d��%c��Ʒ�ܹ�%dԪ\n",number,buy,sum);
	return 0;
}
