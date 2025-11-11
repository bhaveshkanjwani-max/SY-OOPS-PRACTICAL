#include<iostream>
#include<queue>
using namespace std ;
int main()
{
	queue<int>q;
	int ch,i,data;
	do
	{
		cout<<"\n1:-to insert \n2:-to delete \n3:-to display \n4:- to exit \nenter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"enter data to insert : ";
				cin>>data;
				q.push(data);
				break;
			case 2:
				if(q.empty())
				{
					cout<<"queue underflow : ";
				}
				else
				{
					q.pop();
					cout<<"data popped : ";
					break;
				}
				
			case 3:
				if(q.empty())
				{
					cout<<"queue underflow : ";
				}
				else
				{
					queue<int>temp=q;
					while(!temp.empty())
					{
						cout<<temp.front()<<" ";
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

