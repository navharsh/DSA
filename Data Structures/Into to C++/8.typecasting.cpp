#include<iostream>
using namespace std;

int main()
{
// IMPILICT TYPECASTING
// 1. int to float
    int a = 10;
    float b = 5.5;
    float c = a + b;
    cout << c << endl; // 15.5
    
    int x = 10;
    float y = x;
    cout << y << endl; // 10.0


// 2. char to int
    char ch = 'A';
    int i = ch;
    cout << i << endl; // 65

    char m = 'B';
    int n = m + 1;
    cout << n << endl; // 67

// 3. int to char
    int p = 97;
    char q = p + 1;
    cout << q << endl; // b


// EXPLICIT TYPECASTING

// 1. int to float

    int d = 10;
    float e = 5.5;
    float f = (float)d + e;
    cout << f << endl; // 15.5

    int a1 = 100;
    int b1 = 3.0; // 3.0 is a double
    float c1 = a1 / b1; // 33
    cout << c1 << endl; // Output is not 33.33 because int/int = int and then it is converted to float so 33.

    float c2 = (float)a1 / b1; // 33.3333 explicit typecasting
    cout << c2 << endl; // 33.3333 because float/int = float
// 2. double to int

    double pi = 3.14159;
    int i_pi = (int)pi;
    cout << i_pi << endl; // 3

// 3. float to char

    float g = 65.5;
    char h = (char)g;
    cout << h << endl; // A
    

    return 0;
}


    // int/int = int
    // int/float = float    float is always preferred over int
    // float/int = float
    // float/float = float