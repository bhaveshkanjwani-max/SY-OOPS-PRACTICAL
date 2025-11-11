#include<iostream>
using namespace std ;
class vehicle
{
	protected:
		string brand ;
		char model[20];
	public:
		void accept()
		{
			cout<<"enter brand of vehicle : ";
			cin>>brand;
			cout<<"enter model of vehicle : ";
			cin>>model;
		}
		void display()
		{
			cout<<"\nbrand of vehicle is : "<<brand;
			cout<<"\nmodel of vehicle is : "<<model;
		}
};
class car: public vehicle
{
	protected:
		char vtype[20];
	public:
		void accept()
		{
			vehicle::accept();
			cout<<"\nenter car type : ";
			cin>>vtype;
		}
		void display()
		{
			vehicle::display();
			cout<<"\nvehicle type is : "<<vtype;
		}	
};
class electric_car:public car
{
	protected:
		float battcap;
	public:
		void accept()
		{
			car::accept();
			cout<<"enter battery capacity : ";
			cin>>battcap;
			
		}
		void display()
		{
			car::display();
			cout<<"\nbattery capacity is :  "<<battcap;
		}
};
int main()
{
	electric_car e1;
	e1.accept();
	e1.display();
	return 0 ;
}
