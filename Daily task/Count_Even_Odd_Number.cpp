#include<stdio.h>
int main()
{
	int num,i,even=0,odd=0;
	printf("enter any ten numbers:\n");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&num);
		if(num%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("count of even numbers : %d\n",even);
	printf("count of odd numbers : %d",odd);
	return 0;
}
