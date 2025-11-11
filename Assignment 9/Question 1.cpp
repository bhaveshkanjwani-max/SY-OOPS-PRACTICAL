#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream f1;
	ofstream f2;
	char ch;
	f1.open("myfile.txt",ios::in);
	f2.open("abc.txt",ios::out);
	while((ch=f1.get())!=EOF)
	{
		f2.put(ch);
	}
	f1.close();
	f2.close();
	cout<<"contents copied : ";
	return 0 ;
	
}
