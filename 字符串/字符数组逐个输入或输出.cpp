/*sizeof(ch)���ڼ����ַ�����ĳ��ȣ������ַ����ܳ������鶨��ĳ��ȣ���������ˣ��򳬹����ֲ����������*/ 
#include<stdio.h>
int main()
{
	int i;
	char ch[6];
	for(i=0;i<sizeof(ch);i++)//����ѭ�����������������Ԫ�� 
	{
		scanf("%c",&ch[i]);
		printf("%c",ch[i]);
	}
	return 0;
}
