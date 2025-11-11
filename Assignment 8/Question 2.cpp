#include<iostream>
using namespace std;
class ilogin
{
	protected:
		char n[20],p[20];
	public:
		virtual void accept()
		{
			cout<<"enter name : ";
			cin>>n;
			cout<<"enter passwrod : ";
			cin>>p;
		} 
		virtual void display()
		{
			cout<<"\nname is : "<<n;
			cout<<"\npassword is : "<<p;
		}	
		
};

class email_login:public ilogin
{
	public:
		void accept()  //function overriding(same function name,same arguments but in different classes and there should be inheritance)
		{
			
			cout<<"enter email id : ";
			cin>>n;
			cout<<"enter email-id password : ";
			cin>>p;
		}
		void display()
		{
			cout<<"\n email id is : "<<n;
			cout<<"\n email id password is : "<<p;
		}
};
class membership_login:public ilogin
{
	public:
		void accept()
		{
			
			cout<<"enter membership name : ";
			cin>>n;
			cout<<"enter membership password : ";
			cin>>p;
		}
		void display()
		{
			cout<<"\nmembership name is : "<<n;
			cout<<"\nmembership password is : "<<p;
		}
};

int main()
{
	ilogin *il,ill;  //base class pointer
	email_login el;
	membership_login ml;
	
	int type;
	cout<<"\n1:- for email login \n2:- for membership login : \n3:-normal login  ";
	cin>>type;
	if(type==1)
	{
		il=&el;
		il->accept();
		il->display();
	}
	else if(type==2)
	{
		il=&ml;
		il->accept();
		il->display();
	}
	else if(type==3)
	{
		il=&ill;
		il->accept();
		il->display();
	}
	return 0 ;
}
