#include<stdio.h>
int main()
{
	int i,n,fact=1;
	printf("enter any number:");
	scanf("%d",&n);
	if(n==0)
	{
		printf("factorial of %d=%d",n,fact);
	}
	else if(n<0)
	{
		printf("invalid number");
	}
	else
	{
		for(i=n;i>=1;i--)
		{
			fact=fact*i;
		}
		printf("factorial of %d=%d",n,fact);
	}
	return 0;
}
