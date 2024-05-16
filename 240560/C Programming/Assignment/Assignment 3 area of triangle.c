// Find the area of the triangle
#include<stdio.h>
float main()
{
	float b,h,area;
	
	printf("length of the base of triangle : ");
	scanf("%f", &b);
	printf("height of the base triangle : ");
	scanf("%f",&h);
	
	area=0.5*b*h;
	printf("area of the triangle is %f", area);

	
	return 0;
}
