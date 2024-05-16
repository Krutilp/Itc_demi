// wap to check number is divisble by 5 or not
#include<stdio.h>
int main()
{
	int no,div;
	
	printf("Enter the number which you want to check : ");
	scanf("%d",&no);
	
	printf("Divisible by? ");
	scanf("%d",&div);
	
	if (no%div==0)
	{
		printf("%d is divisible by %d", no,div);
	}
	else
	{
		printf("%d is not divisible by %d", no,div);
	}
	return 0;
}
