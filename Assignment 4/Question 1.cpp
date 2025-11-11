#include<iostream>
using namespace std ;
class result1
{
	float marks;
	public:
		void accept()
		{
			cout<<"\nenter marks : ";
			cin>>marks;
		}
		void display()
		{
			cout<<"\nmarks are : "<<marks;
		}
		float getmarks()
		{
			return marks;
		}
};
class result2
{
	float marks;
	public:
		void accept()
		{
			cout<<"\nenter marks : ";
			cin>>marks;
		}
		void display()
		{
			cout<<"\nmarks are : "<<marks;
		}
		float calaverage(result1 &a)
		{
			float average;
			average=(a.getmarks()+marks)/2;
			return average;
		}
};


int main ()
{
	result1 r1;
	result2 r2;
	r1.accept();
	r2.accept();
	r1.display();
	r2.display();
	float ans=r2.calaverage(r1);
	cout<<"\naverage of two results of two marks are : "<<ans;
	
	return 0 ;
}

