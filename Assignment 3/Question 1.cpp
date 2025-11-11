#include <iostream>
using namespace std ;
class Book
{
	char bname[40],aname[40];
	float p;
	public:
		void accept();
		void display();
		
};
void Book :: accept()
{
	cout<<"enter name of book : ";
	cin>>bname;
	cout<<"enter name of author : ";
	cin>>aname;
	cout<<"enter price of book : ";
	cin>>p;
}
void Book :: display()
{
	cout<<"name of book is : "<<bname;
	cout<<"\nname of author is : "<<aname;
	cout<<"\nprice of book is : "<<p;
	
}
int main ()
{
	Book *bptr,b1;
	bptr=&b1;
	bptr->accept();
	bptr->display();
	
	
	
	return 0 ;
}
