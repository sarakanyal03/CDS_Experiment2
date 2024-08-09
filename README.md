# Experiment2

## AIM
To study and implement C++ program strucutres (Data Type). <br>

## THEORY
Data types in C++ programming language is defined as the type of data that can be manipulated and stored within a program. they play vital role in efficient memory management, especially performing various operations with data. As we know C++ supports a massive variety of data types, which can be broadly categorized into three types as follows: <br>
i) Primitive data types- 'int', 'short', 'long','long long', 'unsigned int','char', 'unsigned char', 'signed char', 'float', 'double', 'long double', 'bool', etc <br>
ii) Defined data type <br>
iii) User defined data types <br>
Moreon we use 'sizeof' command for determination of size of data types. It shows the number of bytes occupied by any variable in a computer memory.<br>
Storage class here determinesthe characteristics of a variable. Mainly it has five types, as follows: <br>
i) 'auto' <br>
ii) 'register' <br>
iii) 'static' <br>
iv) 'extern' <br>
v) 'mutable' <br>
## CODE 
1) CODE A : <BR>
```
//SARA KANYAL
//23070123115
//ETC-B2
#include <iostream>
using namespace std;

int main() {
    cout << "Size of char: " << sizeof(char) << " byte(s)" << endl;
    cout << "Size of unsigned char: " << sizeof(unsigned char) << " byte(s)" << endl;
    cout << "Size of signed char: " << sizeof(signed char) << " byte(s)" << endl;
    cout << "Size of int: " << sizeof(int) << " byte(s)" << endl;
    cout << "Size of unsigned int: " << sizeof(unsigned int) << " byte(s)" << endl;
    cout << "Size of signed int: " << sizeof(signed int) << " byte(s)" << endl;
    cout << "Size of short int: " << sizeof(short int) << " byte(s)" << endl;
    cout << "Size of unsigned short int: " << sizeof(unsigned short int) << " byte(s)" << endl;
    cout << "Size of signed short int: " << sizeof(signed short int) << " byte(s)" << endl;
    cout << "Size of long int: " << sizeof(long int) << " byte(s)" << endl;
    cout << "Size of signed long int: " << sizeof(signed long int) << " byte(s)" << endl;
    cout << "Size of unsigned long int: " << sizeof(unsigned long int) << " byte(s)" << endl;
    cout << "Size of long long int: " << sizeof(long long int) << " byte(s)" << endl;
    cout << "Size of unnsigned long int: " << sizeof(unsigned long int) << " byte(s)" << endl;
    cout << "Size of float: " << sizeof(float) << " byte(s)" << endl;
    cout << "Size of double: " << sizeof(double) << " byte(s)" << endl;
    cout << "Size of short: " << sizeof(short) << " byte(s)" << endl;
    cout << "Size of long: " << sizeof(long) << " byte(s)" << endl;
    cout << "Size of long long: " << sizeof(long long) << " byte(s)" << endl;
    cout << "Size of bool: " << sizeof(bool) << " byte(s)" << endl;

    return 0;
}
```
2) CODE B : <BR>
```
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
```
3) CODE C : <BR>
```
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
```

## OUTPUT
2a: <br>
![exp2a](https://github.com/sarakanyal03/CDS_Experiment2/blob/main/Screenshot%202024-07-30%20225618.png)
2b: <br>
![exp2B](https://github.com/sarakanyal03/CDS_Experiment2/blob/main/Screenshot%202024-07-31%20004303.png)
2c <br>
![exp2C](https://github.com/sarakanyal03/CDS_Experiment2/blob/main/Screenshot%202024-07-30%20225725.png)
## CONCLUSION

I learnt about different data types and storage classes of C++.
We learnt deeply about data types in c++ programming language. By implementing data types we not only cherish our theoritical knowledge but also develop better problem solving skills.

