#include<stdio.h>
main()
{
	int a=4;
	short b;
	double c;
	int* ptr;
	
	/*sizeof�����ʵ��*/
	printf("Line - ����a�Ĵ�С = %1u\n",sizeof(a));
	printf("Line - ����b�Ĵ�С = %1u\n",sizeof(b));
	printf("Line - ����c�Ĵ�С = %1u\n",sizeof(c));
	
	/*&��*�����ʵ��*/
	ptr = &a; /*'ptr'���ڰ���'a'�ĵ�ַ*/
	printf("a��ֵ�� %d\n",a);
	printf("*ptr�� %d\n",*ptr);
	
	/*��Ԫ�����ʵ��*/
	a=10;
	b=(a==1)?20:30;
	printf("b��ֵ��%d\n",b);
	
	b=(a==10)?20:30;
	printf("b��ֵ��%d\n",b); 
}
