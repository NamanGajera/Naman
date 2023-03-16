#include<iostream>
using namespace std;

int main()
{
	cout<<"----------Enter First Matrix element------------\n\n";
	int a[2][2],b[2][2];
	for (int i = 0 ; i < 2 ; i++)
	{
		for(int j = 0 ; j < 2 ; j++)
		{
			cout<<"Enter ["<<i<<"] ["<<j<<"] element : ";
			cin>>a[i][j];
			cout<<"\n";
		}
	}
	cout<<"----------Enter Second Matrix element------------\n\n";
	for (int i = 0 ; i < 2 ; i++)
	{
		for(int j = 0 ; j < 2 ; j++)
		{
			cout<<"Enter ["<<i<<"] ["<<j<<"] element : ";
			cin>>b[i][j];
			cout<<"\n";
		}
	}
	cout<<"----------Addition Of Matrix------------\n\n";
	int add[2][2];
	for (int i = 0 ; i < 2 ; i++)
	{
		for(int j = 0 ; j < 2 ; j++)
		{
			add[i][j] = b[i][j]+a[i][j];
		}
	}
	for (int i = 0 ; i < 2 ; i++)
	{
		for(int j = 0 ; j < 2 ; j++)
		{
			cout<<add[i][j]<<"   ";
		}
		cout<<"\n";
	}
	cout<<"----------Multiplication Of Matrix------------\n\n";
	int mul[2][2];
	for (int i = 0 ; i < 2 ; i++)
	{
		for(int j = 0 ; j < 2 ; j++)
		{
			mul[i][j] = 0;
			for(int k = 0 ; k < 2 ; k ++)
			{
				mul[i][j] = mul[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	for (int i = 0 ; i < 2 ; i++)
	{
		for(int j = 0 ; j < 2 ; j++)
		{
			cout<<mul[i][j]<<"   ";
		}
		cout<<"\n";
	}
}
