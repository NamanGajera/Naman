#include<iostream>
using namespace std;

int main()
{
	char str[50];
	
	cout<<"Enter String : ";
	gets(str);
	
	int i = 0 , vowel = 0 , con = 0 ;
	while(str[i] != 0)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
		{
			vowel++;
		}
		else
		{
			con++;
		}
		i++;
	}
	cout<<"Total number of vowel is : "<<vowel;
	cout<<"\n\nTotal number of consonant is : "<<con;
}
