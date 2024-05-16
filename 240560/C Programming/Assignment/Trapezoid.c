#include<stdio.h>
int main()
{
	float a,b,h,sum,area;
	
	printf("Enter the length of a : ");
	scanf("%f",&a);
		printf("Enter the value of b : ");
	scanf("%f",&b);
		printf("Enter the value of h : ");
	scanf("%f",&h);
	sum=a+b;
	area=0.5*sum*h;
	printf("Area of the trapezoid is %f", area);
	
	return 0;
}
