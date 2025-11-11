#include<iostream>
#include<fstream>
#include<ctype.h>
using namespace std ;
int main()
{
	ifstream f1("myfile.txt");
	int d=0,s=0;
	char ch;
	while((ch=f1.get())!=EOF)
	{
		if(isdigit(ch))
		{
			d++;
		}
		else if(isspace(ch))
		{
			s++;
		}
	}
	cout<<"\nnumber of digits in file are : "<<d;
	cout<<"\nnumber of spaces in file are : "<<s;
	return 0 ;
}
