#include<iostream>
using namespace std;
class b
{
	public:
		int b[3][3];
		void getB()
		{
			int i,j;
			cout<<"matrix b:\n";
			for(i=0;i<=2;i++)
			{
				for(j=0;j<=2;j++)
				{
					cout<<"b["<<i<<"]["<<j<<"]=";
					cin>>b[i][j];
				}
			}
		}
};
class a
{
	public:
		int a[3][3];
		void getA()
		{
			int i,j;
			cout<<"matrix a:\n";
			for(i=0;i<=2;i++)
			{
				for(j=0;j<=2;j++)
				{
					cout<<"a["<<i<<"]["<<j<<"]=";
					cin>>a[i][j];
				}
			}
		}
		void operator+(b obj)
		{
			int i,j,c[3][3];
			cout<<"\naddition of two matrix:\n";
			for(i=0;i<=2;i++)
			{
				for(j=0;j<=2;j++)
				{
					c[i][j]=a[i][j]+obj.b[i][j];
					cout<<c[i][j]<<"\t";
				}
				cout<<"\n";
			}
		}	
};
int main()
{
	a obj;
	b obj1;
	obj.getA();
	obj1.getB();
	obj+obj1;
	return 0;	
}
