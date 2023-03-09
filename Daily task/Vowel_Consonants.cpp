#include<stdio.h>
int main()
{
	char c;
	printf("enter any alphabet:");
	scanf("%c",&c);
	if(c>='A'&& c<='Z'|| c>='a'&& c<='z')	
	{
		switch(c)
		{
			case 'a':
				case 'A':
					case 'e':
						case 'E':
							case 'i':
								case 'O':
									case 'o':
										case 'u':
											case 'U':
												printf("vowel");
												break;
												
			default:printf("consonant");
					break;
		}
	}
	else
	{
		printf("invalid alphabet!!!!");
	}
}
