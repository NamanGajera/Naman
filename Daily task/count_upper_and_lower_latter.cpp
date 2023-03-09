#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int upper=0,lower=0,di=0;
    char ch[100];

    printf("Enter the String:");
    gets(ch);

    i=0;
    while(ch[i]!=0){

		if(ch[i]>='A' && ch[i]<='Z'){
		    upper++;
		}
		else if(ch[i]>='a' && ch[i]<='z'){
		    lower++;
		}
		i++;
    }
	printf("Total of Small letters: %d",lower);
	printf("\nTotal of Large letters: %d",upper);
    return 0;
}
