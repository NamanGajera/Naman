#include<iostream>
using namespace std;

int main()
{
	char n;
	cout<<"Enter any alphabet : ";
	cin>>n;
	if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u')
	{
		cout<<"\nThis is Vowel";
	}
	else
	{
		cout<<"\nThis is consonant";
	}
}
