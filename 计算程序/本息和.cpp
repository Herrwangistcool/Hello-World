#include<stdio.h>
main()
{
	double Ca, rate, rest;//Ca=本金，rate=利率，rest=利息
	double total; //total=本息和
	int term; //term=期数
	printf("Enter your capital!");
	scanf("%lf",&Ca);
	printf("\nEnter term:"
	"\n  0--half year"
	"\n  1--1 year"
	"\n  2--2 years"
	"\n  3--3 years"
	"\n  5--5 years\n");
	scanf("%d",&term);
	switch(term){
		case 0:rate=0.5*2.07*0.01;
			break;
		case 1:rate=2.25*0.01;
			break;
		case 2:rate=2.7*0.01;
			break;
		case 3:rate=3.24*0.01;
			break;
		case 5:rate=3.6*0.01;
			break;
		default:printf("Input Error\n"); 
			break;
	} 
	rest=Ca*rate;
	total=rest+Ca;
	printf("Ca:%10.2lf]\n",Ca);
	printf("rate:%10.5lf\n",rate);
	printf("rate:%10.2lf\n",total);
	
 } 
