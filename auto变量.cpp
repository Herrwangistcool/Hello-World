/*�˺����ж����˺���f�����еı���j˵��Ϊ�Զ�����������ʼֵΪ0. 
��main�����ж�ε���fʱ��j����ֵΪ0����ÿ�������ֵ��Ϊ1.*/ 

#include<stdio.h>
int main()
{
	int i;
	void f();                 //����˵�� 
	for (i = 1; i <= 5; i++)
		f();                  //�������� 

	return 0;
	
}
void f()                      //�������� 
{
	auto  int j = 0;
	++j;
	printf("%d\n", j);
}
