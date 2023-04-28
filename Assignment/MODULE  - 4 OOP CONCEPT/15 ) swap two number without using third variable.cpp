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
		friend void swap(a,b);
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
		friend void swap(a,b);
};
void swap(a obj1,b obj2)
{
	cout<<" before swapping the two variable value is "<<obj1.num1<<" and "<<obj2.num2<<endl;
	obj1.num1=obj1.num1+obj2.num2;
	obj2.num2=obj1.num1-obj2.num2;
	obj1.num1=obj1.num1-obj2.num2;
	cout<<"\n after swapping the two variable value is "<<obj1.num1<<" and "<<obj2.num2<<endl;
}
int main()
{
	a obj1;
	b obj2;
	obj1.getdata();
	obj2.getdata();

	swap(obj1,obj2);
	
	return 0;
}
