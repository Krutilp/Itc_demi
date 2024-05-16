// wap to find grade using below range
#include<stdio.h>
int main()
{
	int per;
	
	printf("Enter the percentage : ");
	scanf("%d",&per);
	
	if(per>100)
	{
		printf("Enter Valid Percentage");
	}
	else if(per>=80)
	{
		printf("Grade is A");
	}
	else if(per>=65)
	{
		printf("Grade is B");
	}
	else if(per>=50)
	{
		printf("Grade is C");
	}
	else if(per>=33)
	{
		printf("Grade is D");
	}
	else if(per<=33)
	{
		printf("YOU ARE FAILED");
	}
	
	return 0;
}
