
#include<iostream>
using namespace std ;
class addition
{
	public:
		int sum(int num[5])
		{
			int sum=0,i;
			for(i=0;i<5;i++)
			{  
				sum=sum+num[i];
			}
			return sum;
		}
		float sum(float num[10])
		{
			int sum=0,i;
			for(i=0;i<10;i++)
			{
				sum=sum+num[i];
			}
			return sum;
		}
};
int main ()
{
	addition a1;
	int i,n[5],j;
	float m[10];
	cout<<"enter 5 numbers : ";
	for(i=0;i<5;i++)
	{
		cin>>n[i];
	}
	cout<<"array is : ";
	for(i=0;i<5;i++)
	{
		cout<<" "<<n[i];
	}
	int total=a1.sum(n);
	
	cout<<"\nenter 10 numbers : ";
	for(j=0;j<10;j++)
	{
		cin>>m[j];
	}
	float totall=a1.sum(m);
	
	cout<<"sum of 10 float numbers is : "<<totall;
	cout<<"\nsum of integers is : "<<total;
	
	return 0 ;
}
