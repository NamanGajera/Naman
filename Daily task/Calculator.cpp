#include<stdio.h>
void choiceboard()
{
	int choice,num1,num2;
	char c;
	printf("\n1)Addition");
	printf("\n2)Subtraction");
	printf("\n3)Multiplication");
	printf("\n4)Division");
	printf("\n5)Modulus");
	printf("\n6)Exit");
	while(1)
	{
		printf("\nenter two numbers:");
		scanf("%d %d",&num1,&num2);
		printf("\nenter your choice from chessboard:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
					printf("Addition=%d",num1+num2);
					break;
			case 2:
					printf("Subtraction=%d",num1-num2);
					break;
			case 3:
					printf("multiplication=%d",num1*num2);
					break;
			case 4:
					printf("division=%d",num1/num2);
					break;
			case 5:
					printf("Modulus=%d",num1%num2);
					break;
			case 6:
					break;
			default:
					printf("invalid");
		}
		fflush(stdin);
		printf("\ndo you want to continue print 'y' for yes and 'n' for no:");
		scanf("%c",&c);
		if(c!='y' && c!='Y')
		{
			break;
		}
	}
	printf("thank you");
}
int main()
{
	printf("------------Choice Board-------------");
	choiceboard();
	return 0;

}
