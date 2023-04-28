#include<iostream>
using namespace std;

int mul(int a, int b){ return a*b;}//Multiplication Inline Function
int cube(int c){return c*c*c;}//Cube inline Function

int main()
{
	int a,b,c;
	cout<<"enter number 1 : ";
	cin>>a;
	cout<<"enter number 2 : ";
	cin>>b;
	cout<<"Multiplication is : "<<mul(a,b)<<endl<<endl;
	cout<<"Enter the number to get Cube value : ";
	cin>>c;
	cout<<"the cube of "<<c<<" Is : "<<cube(c);
	return 0;
}
