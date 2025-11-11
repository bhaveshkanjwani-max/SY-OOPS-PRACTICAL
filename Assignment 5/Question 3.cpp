c) Define a class College members variables as roll_no, name, course. WAP using constructor with default value as “Computer Engineering” for course. Accept this data for two objects of class and display the data.

#include<iostream>
#include<string.h>
using namespace std;
class college
{
	int rno;
	char name[20],course[20];
	public:
		college(int a, char b[20],char c[100] = "computer_engineering")
		{
			strcpy(name,b);
			strcpy(course,c);
			rno=a;
		}
		void display()
		{
			cout<<"\nname of student is : "<<name;
			cout<<"\ncourse of student is : "<<course;
			cout<<"\nroll number of student is : "<<rno;
		}
};
int main()
{
	college c1(34,"ram") , c2(35,"john","it");
	c1.display();
	c2.display();
	return 0 ;
}
