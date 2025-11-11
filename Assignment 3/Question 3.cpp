#include<iostream>
#include<string>
using namespace std ;
class employee
{
	int eid;
	string name;
	public:
		employee(int a,string b)
		{
			eid=a;
			name=b;
		}
		class joining_date
		{
			int dd,mm,yy;
			public:
				joining_date(int a,int b,int c)
				{
					dd=a;
					mm=b;
					yy=c;
				}
				void display()
				{
					cout<<"\njoining date is : "<<dd<<":"<<mm<<":"<<yy;
				}
		};
	
		void display(joining_date &jd)
		{
			cout<<"\neid of employee is : "<<eid;
			cout<<"\nname of employee is : "<<name;
			jd.display();
		}	
	
};
int main()
{
	employee e1(23,"joe");
	employee::joining_date jd(12,4,25);
	e1.display(jd);
	return 0 ;
}
