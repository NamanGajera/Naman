#include<iostream>
using namespace std;
//Declaration of class
class Calculator
{
	public:
		int a,b;
		void input(int n1,int n2)//store the value in class variable
		{
			a = n1;
			b = n2;
		}
		void add()//make add funtion for addition
		{
			cout<<"Addition is : "<<a+b;	
		}
		void sub()//make add funtion for Substraction
		{
			cout<<"Substraction is : "<<a-b;	
		}
		void mul()//make add funtion for Multiplication
		{
			cout<<"Multiplication is : "<<a*b;	
		}
		void div()//make add funtion for Division
		{
			cout<<"Division is : "<<a/b;	
		}
};

int main()
{
	Calculator c; // Create A object 
	int n1,n2;
	cout<<"Enter Number 1 : "<<endl;
	cin>>n1;
	cout<<"Enter Number 2 : "<<endl;
	cin>>n2;
	c.input(n1 ,n2);cout<<endl;//input value int class
	c.add();cout<<endl;
	c.sub();cout<<endl;
	c.mul();cout<<endl;
	c.div();cout<<endl;
	return 0;
}
