#include<iostream>
#include<fstream>
#include<ctype.h>
using namespace std ;
int main()
{
	ifstream f1("textfile.txt");
	int w=0;
	char ch;
	while((ch=f1.get())!=EOF)
	{
		if(isspace(ch))
		{
			w++;
		}
	}
	cout<<"total words are : "<<w;
	return 0 ;
}

