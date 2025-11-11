#include<iostream>
#include<string.h>
using namespace std ;
class student 
{
	private :
		char name[20];
		float percent ;
		public:
			student (char x[20],float y);
			
			void display()
			{
				cout<<"name of student is : "<<name;
				cout<<"\npercentage of student is : "<<percent;
			}
};

student :: student(char x[20],float y)
{
		
	strcpy(name,x);
	percent=y;	
}
int main ()
{
	char a[20];
	float b;
	cout<<"enter name : ";
	cin>>a;
	cout<<"enter percentage : ";
	cin>>b;
	student s1(a,b);
	s1.display();
	return 0 ;
}

