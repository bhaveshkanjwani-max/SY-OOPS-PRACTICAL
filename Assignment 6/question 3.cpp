#include<iostream>
using namespace std ;
class employee
{
	protected:
		int eid;
		string name;
		
};
class manager:public employee
{
	protected:
		string dept;
		
	public :
		manager(){
			cout<<"enter employee id : ";
			cin>>eid;
			cout<<"enter name : ";
			cin>>name;
			cout << "Dept : ";
			cin.ignore();
			getline(cin,dept);
		}
		void display(){
			cout << "Eid : "<<eid << endl;
			cout << "name : " << name << endl;
			cout << "Dept : " << dept << endl;
		}
};
class developer:public employee
{
	protected:
		string pl;
	public:
		void accept()
		{
			cout<<"enter programming language : ";
			cin>>pl;
		}
		void display()
		{
			cout << "LNG: " << pl << endl;
		}	 
};
int main()
{
	manager m;
	developer d;
	m.display();
	d.accept();
	d.display();
	return 0 ;
}
