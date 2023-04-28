#include<iostream>
using namespace std;

class Cricketer//this is parent class
{
	public:
	string name;
	int TotalRun , OutNumber ;
	float AvgRun;
	
	void input(string Cname , int TRun ,int OutNum)//store the value into variable
	{
		name = Cname;
		TotalRun = TRun;
		OutNumber = OutNum;
	}
	
};
class Batsman: public Cricketer// this is child class derived from parent class
{
	public:
	void display()//display the information of batsman
	{
		AvgRun = TotalRun/OutNumber;//calculate the avrage run
		cout<<"\nName Of Cricketer Is      : "<<name<<endl;
		cout<<"Total Run of Batsman Is   : "<<TotalRun<<endl;
		cout<<"Average Run Of Batsman Is : "<<AvgRun<<endl;
	}
};

int main()
{
	string name;
	int Trun,out,n;
	cout<<"Enter the Number of batsman : ";
	cin>>n;
	Batsman b[n];//creating array object of child class
	for(int i =0 ; i < n ; i++ )//take input from user 
	{
		cout<<"\n------------------Enter The "<<i+1<<" Number Batsman Information-------------------"<<endl;
		cout<<"Enter the name of batsman : ";
		cin>>name;
		cout<<"Enter the total run of batsman : ";
		cin>>Trun;
		cout<<"Enter the Number of time the batsman was out : ";
		cin>>out;
		b[i].input(name,Trun,out);//store the input into class variable
	}
	for(int i =0 ; i < n ; i++)//display the information about batsman
	{
		cout<<"\n\n------------------Information Of "<<i+1<<" Batsman-----------------------";
		b[i].display();
	}
	return 0;
}
