#include<stdio.h>
int main()
{
	float pi,r,s,sum,area;
	
	printf("Enter radius of base of cone : ");
	scanf("%f",&r);
		printf("Enter length of slant side : ");
	scanf("%f",&s);
	sum=r+s;
	area=3.14*r*sum;
	printf("Total surface area of cone is %f", area);
	
	return 0;
}
