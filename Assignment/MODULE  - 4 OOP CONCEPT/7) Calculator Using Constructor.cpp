#include<iostream>
using namespace std;

class Calculator
{
	public:
		
		Calculator(int a,int b)//Make parameterised Constructor of a class
		{
			cout<<"\nAddition is       : "<<a+b<<endl;
			cout<<"Substraction is   : "<<a-b<<endl;
			cout<<"Multiplication is : "<<a*b<<endl;
			cout<<"Division is       : "<<a/b<<endl;		
		}
		
};

int main()
{
	int n1,n2;
	cout<<"Enter Number 1 : ";
	cin>>n1;
	cout<<"Enter Number 2 : ";
	cin>>n2;
	Calculator(n1,n2);//pass value to constructor
	return 0;
}
