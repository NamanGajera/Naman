#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char name[50],city[50],mycity[50]="indian";
	int age,price,discountPrice;
	
	cout<<"Enter your name : ";
	cin>>name;
	cout<<"\nEnter your age : ";
	cin>>age;
	cout<<"\nEnter your citizenship : ";
	cin>>city;
	cout<<"\nEnter total purchase price : ";
	cin>>price;
	
	if(price > 5000 && age >= 18 && age <= 40 && strcmp(city , mycity) == 0)
	{
		discountPrice = price*0.3;
		cout<<"\n\ntotal price : "<<price;
		cout<<"\n\ndiscounted amount : "<<discountPrice;
		cout<<"\n\nFinal price : "<<price-discountPrice;
	}
	else if(price > 5000 && age > 40 && strcmp(city , mycity) == 0)
	{
		discountPrice = price*0.5;
		cout<<"\n\ntotal price : "<<price;
		cout<<"\n\ndiscounted amount : "<<discountPrice;
		cout<<"\n\nFinal price : "<<price-discountPrice;
	}
}
