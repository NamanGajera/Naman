#include<iostream>
using namespace std;
//Declaration of Bank Class
class Bank
{
	public:
		string name,AccType;
		int accNum,bal,diAmou,wiAmou;
	
		void input(string Mname,int AccNum,string MAccType,int AccBal)//Take input into Class Variable
		{
			name = Mname;
			accNum = AccNum; 
			AccType = MAccType;
			bal = AccBal;
		}
		void displayInformation()//Display the information of Member
		{
			cout<<"Name of Member : "<<name<<endl;
			cout<<"Account Number : "<<accNum<<endl;
			cout<<"Account Type   : "<<AccType<<endl;
			cout<<"Account Balnce : "<<bal<<endl; 
		}
		void memberFunction()//Create Member Function 
		{
			char c,c1;
			cout<<"\nWould you like to deposite amount(y/n) : ";
			cin>>c;
			if(c=='y'||c=='Y')//if member want to deposite amount then this part execute
			{
				cout<<"\nEnter Amount To Deposite : ";
				cin>>diAmou;
				bal = bal + diAmou;
			}
			else
			{
				cout<<"\n\nThank You!!!"<<endl;
			}
			
			cout<<"\nwould you like to withdraw(y/n) : ";
			cin>>c1;
			if(c=='y'||c=='Y')//if member want to withdraw amount then this part execute
			{
				cout<<"\nYour Balance Is : "<<bal<<endl;
				cout<<"\nEnter Amount To Withdraw : ";
				cin>>wiAmou;
				bal = bal - diAmou;
			}
			else
			{
				cout<<"\n\nThank You!!!"<<endl;
			}
			cout<<endl;
			cout<<"Your Name Is : "<<name<<endl;
			cout<<"Your Balance Is : "<<bal<<endl;
			
		}
};

int main()
{
	Bank b;
	string name,AcType;
	double AcNum,AcBal;
	cout<<"-----------------------welcom-----------------------------"<<endl;
	cout<<"Enter Name Of Member : ";
	cin>>name;
	cout<<"Enter Accout Number : ";
	cin>>AcNum;
	cout<<"Enter Account Type : ";
	cin>>AcType;
	cout<<"Enter Account Balance : ";
	cin>>AcBal;
	b.input(name,AcNum,AcType,AcBal);//store value into class Variable
	cout<<endl;
	cout<<"-----------------------Member Information-----------------------------"<<endl;
	b.displayInformation();//print member information
	b.memberFunction();//execute Member Function
	return 0;
}
