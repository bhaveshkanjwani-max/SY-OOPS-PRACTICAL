#include <iostream>
#include <string>
using namespace std;
template <class T>
T square(T num) 
{
    return num*num;
}

template <>string square(string str) 
{ 
    return str + str;
}

int main() {
    int num = 5;
    string text = "Hello";

    cout << "Square of integer "<<num<<" = "<<square(num);
    cout << "Square of string \""<<text<<"\" = "<<square(text);

    return 0;
}

