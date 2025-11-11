c) Write a program to declare class time, accept time in HH:MM:SS format, convert it into total seconds, and display them.
#include <iostream>
using namespace std ;
class Time
{
	int h,m,s;
	public :
		void accept ();
		void display ();
		int convert();
};
int Time :: convert ()
{
	return (h*3600)+(m*60)+s;
}
void Time :: accept()
{
	cout<<"enter time in hours : ";
	cin>>h;
	cout<<"enter time in minutes : ";
	cin>>m;
	cout<<"enter time in seconds : ";
	cin>>s;
}
void  Time :: display ()
{
	cout<<"time in (HH:MM:SS)"<<h<<":"<<m<<":"<<s;
}
int main ()
{
	Time t1;
	t1.accept();
	t1.display();
	cout<<"\ntotal seconds are : "<<t1.convert();
	return 0 ;
}


