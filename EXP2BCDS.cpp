//SARA KANYAL
//23070123115
//ETC-B2
#include <iostream>
using namespace std;

int main() {
    char a;
    int b;
    short int c;
    long int d;
    float e;
    double f;
    bool g;

    cout << "Enter a character: ";
    cin >> a;
    cout << "Size of char: " << sizeof(a) << endl;

    cout << "Enter an int: ";
    cin >> b;
    cout << "Size of int: " << sizeof(b) << endl;

    cout << "Enter a short int: ";
    cin >> c;
    cout << "Size of short int: " << sizeof(c) << endl;

    cout << "Enter a long int: ";
    cin >> d;
    cout << "Size of long int: " << sizeof(d) << endl;

    cout << "Enter a float: ";
    cin >> e;
    cout << "Size of float: " << sizeof(e) << endl;

    cout << "Enter a double: ";
    cin >> f;
    cout << "Size of double: " << sizeof(f) << endl;

    cout << "Enter a bool: ";
    cin >> g;
    cout << "Size of bool: " << sizeof(g) << endl;

    return 0;
}
