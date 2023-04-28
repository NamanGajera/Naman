#include<iostream>
using namespace std;
int area(int length,int width)
{
	return length*width;
}
float area(float height,float base)
{
	return 0.5*height*base;
}
float area(int radius)
{
	return 3.14*radius*radius;
}
int main()
{
	int length,width,radius;
	float height,base;
	cout<<"-----area of rectangle-----\n";
	cout<<"enter length of rectangle:";
	cin>>length;
	cout<<"enter width of rectangle:";
	cin>>width;
	cout<<"the area of rectangle is:"<<area(length,width);
	cout<<"\n-----area of triangle-----\n";
	cout<<"enter height of triangle:";
	cin>>height;
	cout<<"enter base of triangle:";
	cin>>base;
	cout<<"the area of triangle is:"<<area(height,base);
	cout<<"\n-----area of circle-----\n";
	cout<<"enter radius of circle:";
	cin>>radius;
	cout<<"the area of circle is:"<<area(radius);
	return 0;
	
}
