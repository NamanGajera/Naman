#include<iostream>
using namespace std;
class b;
class a
{
	
		int num1;
		public:
		void getdata()
		{
			cout<<"enter number1:";
			cin>>num1;
		}
		friend void max(a,b);
};
class b
{
		int num2;
		public:
		void getdata()
		{
			cout<<"enter number2:";
			cin>>num2;
		}
		friend void max(a,b);
};
void max(a obj1,b obj2)
{
	(obj1.num1>obj2.num2)?cout<<obj1.num1<<" is max":cout<<obj2.num2<<" is max";
}
int main()
{
	a obj1;
	b obj2;
	obj1.getdata();
	obj2.getdata();

	max(obj1,obj2);
	
	return 0;
}
