#include<iostream>
using namespace std ;
class academic
{
	protected:
		float marks;
};
class sports
{
	protected:
		float score;
};
class result:public academic,sports
{
	protected:
		float total=0 ;
	public:
		void accept()	
		{
			cout<<"enter academic marks : ";
			cin>>marks;
			cout<<"enter sports score : ";
			cin>>score;
			total=(marks+score);
		}
		void display()
		{
			cout<<"\nacademic marks are : "<<marks;
			cout<<"\nsports marks are : "<<score ;
			cout<<"\nresult is : "<<total;
		}
};
int main()
{
	result r1;
	r1.accept();
	r1.display();
	return 0 ;
}
