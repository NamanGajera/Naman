#include<iostream>
using namespace std;

int main ()
{
	int n ,even = 0 , odd = 0 ;
	cout<<"enter any 10 integer number\n";
	for(int i = 0 ; i<10 ; i++)
	{
		cin>>n;
		if(n%2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	cout<<"\n\nTotal even number is : "<<even;
	cout<<"\n\nTotal odd number is : "<<odd;
}
