//write  a program in c to find total of two integers
#include<stdio.h>
int main()
{
	int no1,no2,total,avg;
	
	no1=10;
	no2=20;
	
	total=no1+no2;
	avg=total/2;
	
	printf("Total is %d\n",total);
	printf("Average of %d and %d is %d",no1,no2,avg);
	
	return 0;
}
