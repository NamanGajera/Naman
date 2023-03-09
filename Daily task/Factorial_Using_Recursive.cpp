int fact(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
#include<stdio.h>
int main()
{
	int num;
	printf("enter any number:");
	scanf("%d",&num);
	printf("factorial of %d is : %d",num,fact(num));
	return 0;
}
