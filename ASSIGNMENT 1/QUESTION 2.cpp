#include <iostream>
using namespace std ;
class Book
{
	float bprice;
	char name[40];
	int pages ;
	public :
		void accept ();
		void display ();
		float getPrice();
	
};
float Book :: getPrice()
{
	return bprice;
}
void Book :: accept ()
{
	cout<<"\nenter name of book : ";
	cin>>name;
	cout<<"enter price of book : ";
	cin>>bprice;
	cout<<"enter number of pages : ";
	cin>>pages;
}
void Book :: display ()
{
	cout <<"\nname of book is : "<<name;
	cout<<"\nprice of book is : "<<bprice;
	cout<<"\nnumber of pages in book are : "<<pages;
}
int main ()
{
	Book b1,b2;
	b1.accept();
	b1.display();	
	b2.accept();
	b2.display();
	
	if(b1.getPrice()>b2.getPrice())
	{
		cout<<"\nprice of book 1 is higher : ";
	}
	else 
	{
		cout<<"\nprice of book 2 is higher : ";
	}
	return 0 ;
}
