#include<stdio.h>
#include<string.h>
int main()
{
	
	printf("\n1)reverse a string");
	printf("\n2)Concatenation");
	printf("\n3)Palindrome");
	printf("\n4)Copy a string");
	printf("\n5)Length of the string ");
	printf("\n6)Frequency of character in s string ");
	printf("\n7)Find number of vowels and consonants ");
	printf("\n8)Find number of blank spaces and digits ");
    int ch;
    int n;
    do{
    	printf("\n\n Enter Your Choice :");
    	scanf("%d",&n);
    	switch(n)
    	{
    		case 1:
    			{
    				char str[100];
    				printf("\n Enter String : ");
    				scanf("%s",&str);
    				printf (" \n After the reverse of a string: %s ", strrev(str)); 
    				break;
				}
			case 2:
    			{
    				char string_1[25]; // char array  is declared
				    char string_2[25]; // char array  is declared
				
					printf("\nEnter value for string_1 : ");  // first string is taken as input
				  	scanf("%s", string_1); 
				
				  	printf("\nEnter value for string_2 : ");  // second string is taken as input
				  	scanf("%s",string_2); 
				  	printf("\nThe new concatenated string will be: %s",strcat(string_1,string_2) );  
  
    				break;
				}
			case 3:
    			{
    				char string1[20];
				    int i, length;
				    int flag = 0;
				    
				    printf("\nEnter a string:");
				    scanf("%s", string1);
				    
				    length = strlen(string1);
				    
				    for(i=0;i < length ;i++){
				        if(string1[i] != string1[length-i-1]){
				            flag = 1;
				            break;
				           }
				        }
				    
				    if (flag) {
				        printf("\n%s is not a palindrome", string1);
				    }    
				    else {
				        printf("\n%s is a palindrome", string1);
				    }
    				break;
				}
			case 4:
    			{
    				char str1[100];
				  	char str2[100];
				  	printf("\nEnter a string:");
				    scanf("%s", str1);
				  	strcpy(str2, str1);
				  	printf("\nstring 1 is : %s",str1);
				  	printf("\nstring 2 is : %s",str2);
    				break;
				}
			case 5:
    			{
    				char str1[100];
				  	printf("\nEnter a string:");
				    scanf("%s", str1);
				    printf("\nthe length of string is : %d",strlen(str1));
    				break;
				}
			case 6:
    			{
    				char str[1000];
				    int i;
				
				    printf("Enter a string of lowercase English letters : ");
				    scanf("%s",&str);
				
				    int freq[26] = {0};
				
				    for (i = 0; str[i] != '\0'; i++)
				    {
				        freq[str[i]-'a'] += 1;
				    }
				
				    printf("The frequency of characters is -\n");
				    for (i = 0; i < 26; i++)
				    {
				        if (freq[i] != 0)
				        {
				            char char_ = 'a' + i;
				            printf("\t%c = %d\n", char_, freq[i]);
				        }
				    }
    				break;
				}
			case 7:
    			{
    				char s[1000];  
				    int i,vowels=0,consonants=0;
				 
				    printf("Enter  the string : ");
				    gets(s);
				     
				    for(i=0;s[i];i++)  
				    {
				    	if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122))
				    	{
						
				            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U')
						      vowels++;
				            else
				             consonants++;
				        }
				 
				 	}
				 	
				     
				    printf("vowels = %d\n",vowels);
				    printf("consonants = %d\n",consonants);
    				break;
				}
			case 8:
    			{
					char str[50];
					int i;
					int space=0,num=0;
					printf("Enter a string\n");
					gets(str);
					
					int l = 0;
					while(l != '\0'){
					 if(str[i]==' '){
					        space++;
					    }
					    else if (str[i]>=0 && str[i]<=9)
					    {
					    	num++;
						}
						l++;
					    
					}
					printf("Total white space :%d ",space);
					printf("\nTotal number in string is : %d",num);
    				break;
				}
			default :
				{
					break;
				}
		}
	    printf ("\n\nDo you want to continue(1 for YES | 2 for NO): 1/2 :");
	    scanf(" %d ",&ch);
    } while(ch == 1);
    return 0;

}
