#include<iostream>
using namespace std;

class Event
{
	public:
		string name;
		int guest_num ,minute;
		void input(string n, int gn , int m)
		{
			name = n;
			guest_num = gn;
			minute = m;
		}
		void event_est()
		{
			cout<<"\n-----------------Event estimation for"<<name<<"-----------------\n";
			int num_server = guest_num/20;
			double CostPerHour = 18.50;
			double CostPerMinute = .40;
			double CostOfDinner = 20.70;
			double cost1 = (minute/60)*CostPerHour;
			double cost2 = (minute%60)*CostPerMinute;
			double cost_of_one_server = cost1 + cost2;
			double costOfFood = guest_num * CostOfDinner;
			double AvgCost = costOfFood / guest_num;
			double TotalCost = costOfFood+(cost_of_one_server*num_server);
			double Diposit = TotalCost * 0.25;
			
			cout<<"\nNumber Of Server Is : "<<num_server;
			cout<<"\nThe Cost For Server Is : "<<cost_of_one_server;
			cout<<"\nThe Cost For Food Is : "<<costOfFood;
			cout<<"\nThe Averagae Cost Per PErson Is : "<<AvgCost;
			cout<<"\n\nTotal Cost IS : "<<TotalCost;
			cout<<"\nPlease Deposit 25% Amount Which Is "<<Diposit<<" To Conform Youe Event";
		}
		
};
int main()
{
	Event e1;
	string name_of_event;
	string cus_name;
	int num_guest,event_minute;
	cout<<"Enter the name of event\n";
	cin>>name_of_event;
	cout<<"Enter the customer first and last name\n";
	cin>>cus_name;
	cout<<"Enter the number of guest\n";
	cin>>num_guest;
	cout<<"Enter the number of minute in the event\n";
	cin>>event_minute;
	
	e1.input(cus_name,num_guest,event_minute);
	e1.event_est();
	
	return 0;
}
