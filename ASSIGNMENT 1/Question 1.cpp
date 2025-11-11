#include <iostream>
using namespace std ;
class Student
{
	int rno;
	char class1 [10], name[40];
	public :
		void accept ();
		void display ();
};
void Student :: accept()
{
	cout<<"enter name of student : ";
	cin>>name;
	cout<<"enter roll no of student : ";
	cin>>rno;
	cout<<"enter class of student : ";
	cin>>class1;
}
void Student :: display()
{
	cout<<"name of student is : "<<name;
	cout<<"\nroll no of student is : "<<rno;
	cout<<"\nclass of student is : "<<class1;
}
int main ()
{
	Student s1;
	s1.accept();
	s1.display();
	return 0 ;
}
