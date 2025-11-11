#include<iostream>
using namespace std;
class number
{
	int num;
	public:
		number()
		{
			num=0;
		}
		number(int n)
		{
			num=n;
		}
		void display()
		{
			cout<<"\nnumber is : "<<num;
		}
		void operator -()
		{
			num=-num;
		}
};
int main()
{
	number n1(-3);
	n1.display();
	-n1;
	cout<<"\nnumber after negation is ";
	n1.display();
	return 0;
}
