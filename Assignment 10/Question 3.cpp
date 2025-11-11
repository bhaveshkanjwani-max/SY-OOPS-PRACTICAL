#include <iostream>
#include <cmath>
using namespace std;

template<class t>
class Cal {
    t a, b, c;
public:
    Cal(t c, t d) {
        a = c;
        b = d;
    }

    t add() {
        t c = 0;
        c = a + b;
        return c;
    }

    t subtract() {
        t c = 0;
        c = a - b;
        return c;
    }

    t product() {
        t c = 1;
        c = a * b;
        return c;
    }

    t divide() {
        t c;
        c = a / b;
        return c;
    }

    t Sqrt() {
        return sqrt(a);
    }

    t Cbrt() {
        return cbrt(a);
    }

    t Pow() {
        return pow(a, b);
    }

    t Sin() {
        return sin(a);
    }

    t Cos() {
        return cos(a);
    }

    t Tan() {
        return tan(a);
    }
};

int main() {
    int a, b, ch;
    cout << "\nenter two numbers : ";
        cin >> a >> b;
        Cal<float> c1(a, b);
    do {
        printf("\n1:- to add \n2:- to subtract \n3:- to multiply \n4:- to divide : \n5:-square of number\n6:-cube of number\n7:-power of number\n8:- sin of number \n9:- cos of number \n10:- tan of number\n11:- to exit \nenter your choice : ");
        scanf("%d", &ch);
        

        switch(ch) {
            case 1:
                cout << "addition of two numbers is : " << c1.add();
                break;
            case 2:
                cout << "\nsubtraction of two numbers is : " << c1.subtract();
                break;
            case 3:
                cout << "\nproduct of two numbers is : " << c1.product();
                break;
            case 4:
                cout << "\ndivision of two numbers is : " << c1.divide();
                break;
            case 5:
                cout << "\nsquare root of number is : " << c1.Sqrt();
                break;
            case 6:
                cout << "\ncube root of number is : " << c1.Cbrt();
                break;
            case 7:
                cout << "\npower of number is : " << c1.Pow();
                break;
            case 8:
                cout << "\nsin of number is :sin(" << c1.Sin() << ")";
                break;
            case 9:
                cout << "\ncos of number is :cos(" << c1.Cos() << ")";
                break;
            case 10:
                cout << "\ntan of number is :tan(" << c1.Tan() << ")";
                break;
            case 11:
                cout << "byee";
                break;
        }
    } while(ch != 11);
    return 0;
}
