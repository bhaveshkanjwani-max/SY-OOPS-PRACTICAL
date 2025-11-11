#include<iostream>
using namespace std;
class sum
{
	int a,b;
	public:
	sum(int &x,int &y)
	{
		a=x;
		b=y;
	}
	sum(int &x)
	{
		a=x;
		b=y;
	}
	sum()
	{
		a=b=0;
	}
	

};

int main()
{
	sum s1(7,5);
	int ans=sum();
	cout<<"sum of two numbers is : "<<ans;
	
	
	return 0 ;
}
