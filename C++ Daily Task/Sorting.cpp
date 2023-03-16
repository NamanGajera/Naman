#include<iostream>
using namespace std;
int main()
{
 
    int i, j, a, number[30];
 
        
    for (i = 0; i < 5; ++i){
        cout<<"Enter the "<<i<<" numbers : ";  
        cin>>number[i];
	}
    
    for (i = 0; i < 5; ++i) 
    {
        for (j = i + 1; j < 5; ++j)
        {
            if (number[i] > number[j]) 
            {
                a =  number[i];
                number[i] = number[j];
                number[j] = a;
 
            }
 
        }
 
    }
    cout<<"\nThe numbers arranged in ascending order are given below \n";
    for (i = 0; i < 5; ++i)
    {
        cout<<number[i]<<"\n";
	}
		
	for (i = 0; i < 5; ++i) 
    {
        for (j = i + 1; j < 5; ++j)
        {
            if (number[i] < number[j]) 
            {
 
                a =  number[i];
                number[i] = number[j];
                number[j] = a;
 
            }
 
        }
 
    }
	cout<<"\nThe numbers arranged in descending order are given below \n";
    for (i = 0; i < 5; ++i)
    {
        cout<<number[i]<<"\n";
	}
		
 
}
