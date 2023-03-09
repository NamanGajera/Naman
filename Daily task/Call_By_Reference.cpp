#include<stdio.h>
int swap(int *n1,int *n2)
{
	int temp;
	temp=*n1;
	*n1=*n2;
	*n2=temp;
}
int main()
{
	int a,b;
	printf("enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("the value of A & B before swap:%d %d",a,b);
	swap(&a,&b);
	printf("\nthe value of A & B after swap:%d %d",a,b);
	return 0;
}
