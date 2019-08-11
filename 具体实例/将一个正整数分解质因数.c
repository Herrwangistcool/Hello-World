/*把指定区间上的所有整数分解质因数，每一整数表示为质因数从小到大顺序排列的乘积形式*/
/*如果被分解的数本身是素数，则予以注明。例如 90=2*3*3*5，13=prime*/
#include<stdio.h>
#include<math.h>
int main() {
	long int b, i, k, m, n, w = 0;
	printf("input m,n:");
	scanf("%ld%ld", &m, &n);
	for (i = m; i <= n; i++) {							//i为待分解的整数
		printf("%ld=", i);
		b = i; k = 2;
		while (k <= sqrt(i)) {						   //从k开始逐个元素尝试
			if (b % k == 0) {
				b = b / k;							   //b缩小为k倍
				if (b > 1) {
					printf("%ld*", k);
					continue;						   //*k为质因数，返回再试
				}
				if (b == 1)	printf("%ld\n", k);
			}
			k++;
		}
		if (b > 1 && b < i)	printf("%ld\n", b);		   //输出大于i平方根的因数
		if (b == i) {
			printf("(prime!)\n");					   //b=i，表示i无质因数
			w++;
		}
	}
	printf("the number is %d.\n", w);
	return 0;
}
