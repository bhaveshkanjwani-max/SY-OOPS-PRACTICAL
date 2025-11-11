e) Write a program to demonstrate virtual base class. Assume suitable data with figures.

#include<iostream>
using namespace std ;
class student 
{
	protected:
		int code,sid;
};
class test:public virtual student
{
	protected:
		float per;
};
class sports :public virtual student
{
	protected:
		char grade[2];
};
class result :public test,public sports 
{
	public:
		void accept()
		{
			cout<<"enter college code ";
			cin>>code;
			cout<<"enter student id : ";
			cin>>sid;
			cout<<"enter percentage : ";
			cin>>per;
			cout<<"enter grade : ";
			cin>>grade;
		}
		void display()
		{
			cout<<"\ncollege code is : "<<code;
			cout<<"\nstudent id is : "<<sid;
			cout<<"\npercentage is : "<<per;
			cout<<"\ngrade is : "<<grade;
		}
}; 

int main()
{
	result r1;
	r1.accept();
	r1.display();
	return 0 ;
}
