#include<iostream>
using namespace std;

int main()
{
	for(int i =  0 ; i < 5 ; i++)
	{
		for(int j = i ; j < 4 ;j++)
		{
			cout<<"   ";
			
		}
		for(int j = 0 ; j < (i*2)+1 ;j++)
		{
			cout<<" * ";
		}
		cout<<"\n";
	}
	for (int i = 5; i >= 1; --i) {
        for (int k = 0; k < 5 - i; ++k) {
            cout << "   ";
        }
        for (int j = i; j <= 2 * i - 1; ++j) {
            cout << " * ";
        }
        for (int j = 0; j < i - 1; ++j) {
            cout << " * ";
        }
        cout << endl;
    }
}
