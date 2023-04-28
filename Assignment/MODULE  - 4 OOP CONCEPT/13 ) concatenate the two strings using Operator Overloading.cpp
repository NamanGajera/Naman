#include<iostream>
using namespace std;
class a
{
	public:
		string str1,str2;
		a(string a1,string b1)
		{
			str1=a1;
			str2=b1;
		}
		string operator+()
		{
			return str1+str2;
		}
};
int main()
{
	string a1,b1,output;
	cout<<"enter first string:";
	getline(cin,a1);
	cout<<"enter second string:";
	getline(cin,b1);
	a obj(a1,b1);
	output=obj.operator+();
	cout<<"string concatenation:"<<output;
	return 0;
}
