#include<iostream>
using namespace std;

class Person//this is 1st parent class
{
	public:
		string name;
		int age;
		void inputPer(string Mname,int Mage)//store the name and age of member
		{
			name = Mname;
			age = Mage;
		}
};

class Student//this is second parent class
{
	public:
		float per;
		void inputStu(float Mper)//store the student persantage
		{
			per = Mper;
		}
		
};

class Teacher: public Person,public Student//this is child class derived from both parent class
{
	public:
		int sal;
		void inputTea(int Msal)//store the teacher salary
		{
			sal = Msal;
		}
		void displayStu()//display the student information
		{
			cout<<"\nName of student is : "<<name<<endl;
			cout<<"Age of student : "<<age<<endl;
			cout<<"Persantage of student "<<per<<endl;
		}
		void displayTea()//diaplay the teacher information
		{
			cout<<"\nName of teacher is : "<<name<<endl;
			cout<<"Age of teacher : "<<age<<endl;
			cout<<"Salary of teacher "<<per<<endl;
		}
};

int main()
{
	int stuage,teaage,sal,sm,tm;
	string stuname,teaname;
	float per;
	cout<<"Enter The Number of Student : ";//get the how many student member
	cin>>sm;
	cout<<"Enter The Number of Teacher : ";//get how many teacher member
	cin>>tm;
	Teacher s[sm];//crreate object for student
	Teacher t[tm];//create object for teacher
	cout<<"\n---------------Enter the Data------------------\n\n";
	
	for(int i = 0 ; i < sm ; i++)//get student information
	{
		cout<<"\n------------------Enter The "<<i+1<<" Number Student Information-------------------"<<endl;
		cout<<"\nEnter the name of student : ";
		cin>>stuname;
		cout<<"Enter the age of student : ";
		cin>>stuage;
	    cout<<"Enter the persantage of student : ";
		cin>>per;
		s[i].inputPer(stuname,stuage);//set data into class
		s[i].inputStu(per);//set data into class
	}
			
	for(int i =0 ; i < tm ; i++)//get teacher information
	{
		cout<<"\n------------------Enter The "<<i+1<<" Number Teacher Information-------------------"<<endl;
		cout<<"\nEnter the name of teacher : ";
		cin>>teaname;
		cout<<"Enter the age of teacher : ";
		cin>>teaage;
		cout<<"Enter the salary of teacher : ";
		cin>>sal;
		t[i].inputPer(teaname,teaage);//set data into class
		t[i].inputTea(sal);//set data into class
	}
				
				
	if(stuname.empty())//check student data is empty 
	{
		cout<<"\n- - - - - - - - -Enter The Details Of Student- - - - - - - - - - - -\n\n";
	}
	else{
		for(int i = 0 ; i < sm ; i++)//diasplay student data
		{
			cout<<"\n\n-----------------Information Of "<<i+1<<" Student----------------------"<<endl;
			s[i].displayStu();
		}
		
	}
	if(teaname.empty())//check teacher data is empty or not
	{
		cout<<"\n- - - - - - - - -Enter The Details Of Teacher- - - - - - - - - - - -\n\n";
	}
	else
	{
		for(int i = 0 ; i < tm ; i++ )//display teacher data
		{
			cout<<"\n\n-----------------Information Of Teacher----------------------"<<endl;
			t[i].displayTea();
		}
		
	}
	return 0;
}
