#include<iostream>
#include<vector>
using namespace std ;
int main()
{
	int n,i;
	cout<<"enter the size of n : ";
	cin>>n;
	int i;
	vector<int> v(5,1);
	
	cout<<"vector is : ";
	for(i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	int val,index;
	cout<<"\nenter index to modify : ";
	cin>>index;
	cout<<"enter value : ";
	cin>>val;
	v[index]=val;
	cout<<"\nmodified vector is : ";
	for(i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	for(i=0;i<v.size();i++)
	{
		v[i]=v[i]*10*(i+1);
	}
	cout<<"\nafter multiplying with a scalar value : (";
	for(i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<")";
	return 0 ;
}
