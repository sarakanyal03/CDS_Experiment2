//SARA KANYAL
//23070123115
//ENTC B2
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter any integer: ";
    cin >> a;
    cout << "\nInteger = " << a << " and size is " << sizeof(a) << " bytes" << endl;

    register int b;
    cout << "Enter a number: ";
    cin >> b;
    cout << "\nREGISTER = " << b << " and size is " << sizeof(b) << " bytes" << endl;

    int c;
    cout << "Enter an integer: ";
    cin >> c;
    cout << "\nAuto = " << c << " and size is " << sizeof(c) << " bytes" << endl;

    return 0;
}