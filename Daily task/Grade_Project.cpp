#include<stdio.h>

int main(){
	int SUB1,SUB2,SUB3,SUB4,SUB5,Per;
	printf("Enter The SUB1 Mark\n");
	scanf("%d",&SUB1);
	printf("Enter The SUB2 Mark\n");
	scanf("%d",&SUB2);
	printf("Enter The SUB3 Mark\n");
	scanf("%d",&SUB3);
	printf("Enter The SUB4 Mark\n");
	scanf("%d",&SUB4);
	printf("Enter The SUB5 Mark\n");
	scanf("%d",&SUB5);
	int totalMark = SUB1+SUB2+SUB3+SUB4+SUB5;
	
	printf("Your Total Mark is : %d\n\n",+totalMark);
	
	int per = (totalMark)/5;
	
	printf("Your Percentage is : %d\n\n",+per);
	
	if (per>85){
		printf("Your Grade Is : A\n\n");
	}else if (per>75){
		printf("Your Grade Is : B\n\n");
	}
	else if (per>65){
		printf("Your Grade Is : C\n\n");
	}
	else if (per>55){
		printf("Your Grade Is : D\n\n");
	}
	else{
		printf("Your Failed");
	}
}
