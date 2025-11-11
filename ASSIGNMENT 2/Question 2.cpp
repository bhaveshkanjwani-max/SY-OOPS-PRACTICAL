#include <iostream>
using namespace std ;
class Account
{
	int ac,b;
	public :
	void accept ();
	void display ();
	void update();
};
void Account :: accept()
{
	cout<<"enter account number : ";
	cin>>ac;
	cout<<"enter balace in account : ";
	cin>>b;
	
}
void Account:: display()
{
	cout<<"\n"<<ac<<"\t"<<b;
}
void Account :: update()
{
	if(b>=5000)
	{
		b=b+(0.10*b);
	}
}
int main ()
{
	int i;
	Account a[5];
	
	for(i=0;i<5;i++)
	{
		a[i].accept();
	}
	cout<<"\noriginal data is : \n";
	for(i=0;i<5;i++)
	{
		a[i].display();
	}
	
	cout<<"\nupdated data is : \n";
	for(i=0;i<5;i++)
	{
		a[i].update();
		a[i].display();
	}
	
	
	
	
	return 0 ;
}
