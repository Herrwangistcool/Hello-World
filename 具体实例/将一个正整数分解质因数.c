/*��ָ�������ϵ����������ֽ���������ÿһ������ʾΪ��������С����˳�����еĳ˻���ʽ*/
/*������ֽ����������������������ע�������� 90=2*3*3*5��13=prime*/
#include<stdio.h>
#include<math.h>
int main() {
	long int b, i, k, m, n, w = 0;
	printf("input m,n:");
	scanf("%ld%ld", &m, &n);
	for (i = m; i <= n; i++) {							//iΪ���ֽ������
		printf("%ld=", i);
		b = i; k = 2;
		while (k <= sqrt(i)) {						   //��k��ʼ���Ԫ�س���
			if (b % k == 0) {
				b = b / k;							   //b��СΪk��
				if (b > 1) {
					printf("%ld*", k);
					continue;						   //*kΪ����������������
				}
				if (b == 1)	printf("%ld\n", k);
			}
			k++;
		}
		if (b > 1 && b < i)	printf("%ld\n", b);		   //�������iƽ����������
		if (b == i) {
			printf("(prime!)\n");					   //b=i����ʾi��������
			w++;
		}
	}
	printf("the number is %d.\n", w);
	return 0;
}
