#include <iostream>
using namespace std;

class staff
{
    public:
        string n, p;
        void getdata()
        {
            cout << "Enter name and post : ";
            cin >> n >> p;
        }
        void display()
        {
            cout << "Name: " << n << "  Post: " << p;
        }
};

int main()
{
    int i;
    staff s[5];
    cout << "Enter data for 5 people :" << endl;
    for(i = 0; i < 5; i++)
    {
        cout << "Name " << i+1 << "  Post: " << i+1 << endl;
        s[i].getdata();
    }
    
    int m = 0;
    for(i = 0; i < 5; i++)
    {
        if(s[i].p == "HOD")
        {
            cout << "People who are HOD :" << endl;
            s[i].display();
            m = i;
        }
    }
    return 0;
}
