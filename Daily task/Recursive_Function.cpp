#include<stdio.h>
int recursive(int n)
{
	if(n<=0)
	{
		return 0;
	}
	else
	{
		return n+recursive(n-1);
	}
}
int main()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	printf("Addition of Natural numbers:%d",recursive(num));
	return 0;
}
