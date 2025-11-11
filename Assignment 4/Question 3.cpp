#include<iostream>
using namespace std;
class number
{
	int a;
	public:
		void accept()
		{
			cout<<"enter a number : ";
			cin>>a;
		}
		void display()
		{
			cout<<"\nnumber is : "<<a;
		}
		friend void swapNumbers (number &,number &);
};
void swapNumbers(number &n1, number &n2)
{
	int temp;
	temp=n1.a;
	n1.a=n2.a;
	n2.a=temp;
}

int main ()
{
	number n1,n2;
	n1.accept();
	n2.accept();
	cout<<"original numbers are : ";
	n1.display();
	n2.display();
	swapNumbers(n1,n2);
	cout<<"\nnumbers after swaping are : ";
	n1.display();
	n2.display();
	
	return 0 ;
}
