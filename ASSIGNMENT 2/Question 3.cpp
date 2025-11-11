c) WAP to declare a class Staff having data members as name and post. Accept this data for 5 staff and display names of staff who are “HOD”.

#include <iostream>
#include <string.h>
using namespace std ;
class Staff
{
	char name[40],post[40];
	public:
		void accept ();
		void display ();
		void displayhod () ;
};
void Staff :: accept()
{
	cout<<"enter name of staff : ";
	cin>>name;
	cout<<"enter position of staff : ";
	cin>>post;
}
void Staff :: display()
{
	cout<<"\nname of staff is : "<<name;
	cout<<"\nposition of staff is : "<<post;
	
}
void Staff :: displayhod()
{
	if(stricmp(post,"hod")==0)
	{
		display();
	}
}
int main ()
{
	int i;
	Staff s[5];
	
	for(i=0;i<5;i++)
	{
		s[i].accept();
	}
	cout<<"all details are : ";
	for(i=0;i<5;i++)
	{
		s[i].display();
	}
	
	cout<<"\nhod details are : \n";
	for(i=0;i<5;i++)
	{
		s[i].displayhod();
	}
	
	
	return 0 ;
}

