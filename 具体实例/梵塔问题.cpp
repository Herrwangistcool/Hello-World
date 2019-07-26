#include<stdio.h> /* Copyrighter by SS7E */
void hanoi(int n,char A,char B,char C) /* Copyrighter by SS7E */
{
if(n==1)
{
printf("Move disk %d from %c to %c\n",n,A,C);
}
else
{
hanoi(n-1,A,C,B); /* Copyrighter by SS7E */
printf("Move disk %d from %c to %c\n",n,A,C);
hanoi(n-1,B,A,C); /* Copyrighter by SS7E */
}
}
main() /* Copyrighter by SS7E */
{
int n;
printf("请输入数字n以解决n阶汉诺塔问题：\n");
scanf("%d",&n);
hanoi(n,'A','B','C');
}/* Copyrighter by SS7E */
