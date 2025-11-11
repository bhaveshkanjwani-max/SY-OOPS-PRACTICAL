#include <iostream>
using namespace std ;
class sum 
{
	private:
		int n;
		public:
			
			sum(int x)
			{
				n=x;
			}
			
			void display();
};
void sum :: display()
{
	int s=0;
	for(int i=1;i<=n;i++)
	{
		s=s+i;
	}
	cout<<"sum of "<<n<<" numbers is : "<<s;
}
int main ()
{
	sum s1(5) ;
	s1.display();
	
	
	return 0; 
}

