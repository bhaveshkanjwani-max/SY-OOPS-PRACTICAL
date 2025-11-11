#include<iostream>
using namespace std ;
template<class t>
t sum(t arr[10])
{
	int i;
	t add=0;
	for(i=0;i<10;i++)
	{
		add=add+arr[i];
	}
	return add;
}
int main()
{
	float arr[]={12.1,3,5,6,3,4,9,10,14,15};
	cout<<"\nsum of array elements is : "<<sum(arr);
	return 0 ;
}
