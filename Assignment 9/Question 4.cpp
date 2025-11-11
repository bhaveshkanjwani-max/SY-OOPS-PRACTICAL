#include<iostream>
#include<fstream>
using namespace std ;
int main()
{
	ifstream f1("myfilee.txt");
	string ch;
	int w=0;
	cout<<"enter a word : ";
	cin>>ch;
	string word;
	while(f1>>word)
	{
		cout<<"\n"<<word;
		if(ch==word)
		{
			w++;
		}
	}
	f1.close();
	cout<<"\noccurance of a word in file is : "<<w;
	
	return 0 ;
}
