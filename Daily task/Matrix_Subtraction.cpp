#include<stdio.h>
int main()
{
	int a1[2][2],a2[2][2],res[2][2];
	int i,j;
	printf("------------first matrix----------------------------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("a1[%d][%d]=",i,j);
			scanf("%d",&a1[i][j]);
		}
	}
	printf("------------second matrix----------------------------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("a2[%d][%d]=",i,j);
			scanf("%d",&a2[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			res[i][j]=a1[i][j]-a2[i][j];
		}
	}
	printf("------------Addition of two matrix:-------------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d  ",res[i][j]);
		}
		printf("\n");
	}
}
