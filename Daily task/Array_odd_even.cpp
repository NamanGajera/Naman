#include<stdio.h>
int main()
{
	int a[10],e=0,o=0;
	int b[10],c[10],i;
	for(i=0;i<10;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			b[e]=a[i];
			e++;
		}
		else
		{
			c[o]=a[i];
			o++;
		}
	}
	printf("\neven numbers:%d",e);
	for(i=0;i<e;i++)
	{
		printf("\n%d",b[i]);
	}
	printf("\nodd numbers:%d",o
	);
	for(i=0;i<o;i++)
	{
		printf("\n%d",c[i]);
	}
	return 0;
}
