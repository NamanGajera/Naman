#include<stdio.h>
int main(){
	int i,j;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			if(i==2 && j==2)
			{
				printf("$ ");
			}
			else
			{
				printf("* ");
			}
		}
		printf("\n");
	}
}
