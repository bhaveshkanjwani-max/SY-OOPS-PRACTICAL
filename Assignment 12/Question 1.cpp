#include<iostream>
#include<stack>
using namespace std ;

int main()
{
	stack<int>v;
	int ch,n,data,i;
	do
	{
		cout<<"\n1:-to push \n2:- to pop \n3:- to display \n4:- to exit \nenter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"enter data to push : ";
				cin>>data;
				v.push(data);
				break;
			case 2:
				if(v.empty())
				{
					cout<<"queue overflow : ";
				}
				else
				{
					v.pop();
					cout<<"data popped";
				}
				break;
			case 3:
				if(v.empty())
				{
					cout<<"stack underflow : ";
				}
				else
				{
					cout<<"\nstack is : ";
				
					stack<int>temp=v;
					while(!temp.empty())
					{
						cout<<temp.top()<<" ";
						temp.pop();
					}
				}
				break;
				case 4:
					cout<<"bbyee";
		}
		
	}while(ch!=4);
	return 0 ; 
}
