#include<iostream>
using namespace std;
int add(int a,int b)
{
	return a+b;
}
float add(float a,float b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
float sub(float a,float b)
{
	return a-b;
}
int mult(int a,int b)
{
	return a*b;
}
float mult(float a,float b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}
float div(float a,float b)
{
	return a/b;	
}
int main()
{
	int a,b;
	cout<<"enter first number:";
	cin>>a;
	cout<<"enter second number:";
	cin>>b;
	cout<<"addition="<<add(a,b);
	cout<<"\nsubtraction="<<sub(a,b);
	cout<<"\nmultiplication="<<mult(a,b);
	cout<<"\ndivision="<<div(a,b);
	cout<<"\n------------------------";
	float a1,b1;
	cout<<"\nenter first number:";
	cin>>a1;
	cout<<"enter second number:";
	cin>>b1;
	cout<<"addition="<<add(a1,b1);
	cout<<"\nsubtraction="<<sub(a1,b1);
	cout<<"\nmultiplication="<<mult(a1,b1);
	cout<<"\ndivision="<<div(a1,b1);
}
