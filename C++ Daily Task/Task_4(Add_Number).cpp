#include<iostream>
using namespace std;

int main()
{
	int n , sum = 0;
	cout<<"Enter Number : ";
	cin>>n;
	for(int i = 1 ; i<=n ; i++)
	{
		sum = sum + i;
	}
	cout<<"\n\nTotal Number Is : "<<sum;
}
