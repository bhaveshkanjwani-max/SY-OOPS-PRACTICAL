#include<iostream>
using namespace std ;
class areas
{
	public:
	float area(float l,float b)
	{
		float ans=l*b;
		return ans;
	}
	
	float area(float s)
	{
		float a=s*s;
		return a;
	}
};

int main()
{
	areas a1;
	float answer=a1.area(9,7);
	cout<<"\narea of labrotary is : "<<answer;
	float ans=a1.area(8.0);
	cout<<"\narea of classroom is : "<<ans;
	return 0 ;
}

