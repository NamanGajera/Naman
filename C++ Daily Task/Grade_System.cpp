#include<iostream>
using namespace std;

int main()
{
	int s1,s2,s3,s4,s5,total,per;
	cout<<"Enter The Subject 1 Mark :";
	cin>>s1;
	cout<<"\nEnter The Subject 2 Mark :";
	cin>>s2;
	cout<<"\nEnter The Subject 3 Mark :";
	cin>>s3;
	cout<<"\nEnter The Subject 4 Mark :";
	cin>>s4;
	cout<<"\nEnter The Subject 5 Mark :";
	cin>>s5;
	
	total = s1+s2+s3+s4+s5;
	
	cout<<"\n\nTotal Mark Is : "<<total;
	
	per = total/5;
	
	cout<<"\n\nYour Percentage Is : "<<per;
	
	if(per > 80)
	{
		cout<<"\n\nYour Grade Is : A";
	}
	else if(per <= 80 && per > 70)
	{
		cout<<"\n\nYour Grade Is : B";
	}
	else if(per <= 70 && per > 60)
	{
		cout<<"\n\nYour Grade Is : C";
	}
	else if(per <= 60 && per > 50)
	{
		cout<<"\n\nYour Grade Is : D";
	}
	else if(per <= 50 && per > 35)
	{
		cout<<"\n\nYour Grade Is : E";
	}
	else
	{
		cout<<"\n\nYour Are Failed";
	}
	
	
	
}
