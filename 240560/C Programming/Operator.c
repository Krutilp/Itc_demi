// operators
#include<stdio.h>
int main()
{
	int n1,n2,result;
	
	printf("Enter two values in integer form");
	scanf("%d",&n1);
	scanf("%d",&n2);
	
	result = n1%n2;
	printf("n1 modulus n2 : %d", result);
	
	n1=n1+10;
	printf("\nn1 is %d", n1);
	printf("\nn2 is %d",n2);
	
	return 0;
}
