// 给定两个正整数m=126和n=198，利用辗转相除算法，求他们的最小公倍数
//两个整数的最小公倍数=两整数的乘积/最大公约数
//算法描述：
//有两整数m和n(m<n)
//1. n%m得余数c
//2. 若c=0，则m为两数的最大公约数
//3. 若c!=0，则m赋值给n，c赋值给m，再回去执行1
//最小公倍数=两整数的乘积/最大公约数

#include<stdio.h>

int main(){
    int m=126, n=198;
    //a,b复制m和n的值
    int a=126, b=198;
    int c=0;
    //Greatest common divisor最大公约数
    //Least common multiple最小公倍数
    int GCD=0, LCM=0;
    c=n%m;
    while (c!=0)
    {
        n=m;
        m=c;
        c=n%m;
    }
    GCD=m;
    LCM=a*b/GCD;
    printf("%d和%d的最小公倍数是%d\n",a,b,LCM);
    return 0;
}