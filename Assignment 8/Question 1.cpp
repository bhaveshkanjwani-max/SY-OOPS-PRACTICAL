#include<iostream>
#include<string.h>
using namespace std;
class mystring
{
	char str[20];
	public:
	mystring()
	{
		strcpy(str,"");
	}
	mystring(char a[20])
	{
		strcpy(str,a);
	}
	void display()
	{
		cout<<"string is : "<<str<<"\n";
	}
	mystring operator +(mystring);
};

mystring mystring::operator +(mystring s2)
{
	mystring s3;
	strcpy(s3.str,str);
	strcat(s3.str,s2.str);
	return s3;
}

int main()
{
	mystring s1("abc"), s2("xyz"),s3;
	s1.display();
	s2.display();
	s3=s1+s2;
	cout<<"\nconcatenated ";
	s3.display();
	
	return 0 ;
}
