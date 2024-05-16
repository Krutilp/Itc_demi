#include<stdio.h>
int main()
{
	int i,n,f=0,f1=0,fact;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2!=0){
		
			printf("+%d", i);
			f=f+i;
		}
		else
		{
			printf("-%d", i);
			f1=f1+i;
		}
		
	}
		fact=f-f1;
		printf("=%d", fact);
	
	return 0;
}
