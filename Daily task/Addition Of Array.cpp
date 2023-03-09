#include<stdio.h>
int add(int n[])//here n[] is formal parameter
{
	int i,sum=0;
	for(i=0;i<5;i++)
	{
		sum+=n[i];
	}
	return sum;
}
int main()
{
	int a[5]={0,1,2,3,4};
	printf("Addition of all elements of array :%d",add(a));//here a is actual parameter
	return 0;
}
