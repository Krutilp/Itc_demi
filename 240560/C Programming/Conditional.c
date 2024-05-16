// Conditional statement 
#include<stdio.h>
int main()
{
	int no;
	
	printf("Enter the number : ");
	scanf("%d",&no);
	
	if(no>0)
	printf("Number is positive : ");
	
	else if(no==0)
	printf("Number is zero : ");
	
	else
	printf("Number is negative : ");
	
	printf("\n----Thank You----");
	
	return 0;
}
