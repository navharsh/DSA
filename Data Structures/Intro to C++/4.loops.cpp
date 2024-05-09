#include<iostream>
using namespace std;

int main()
{
       // for loop
    for (int i = 0; i < 5; i++) {
        cout << "Value of i: " << i << endl;
    }

cout << "-------------------" << endl;
    // while loop
    int i = 0;
    while (i < 5) {
        cout << "Value of i: " << i << endl;
        i++;
    }
cout << "-------------------" << endl;

    // do-while loop
    i = 0;
    do {
        cout << "Value of i: " << i << endl;
        i++;
    } while (i < 5);
cout << "-------------------" << endl;

    // nested loops
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "i: " << i << ", j: " << j << endl;
        }
    }
    cout << "-------------------" << endl;


    // break statement
    for (int i = 0; i < 5; i++) {
        if (i == 3) {
            break;
        }
        cout << "Value of i: " << i << endl;
    }
cout << "-------------------" << endl;

    // continue statement
    for (int i = 0; i < 5; i++) {
        if (i == 3) {
            continue;
        }
        cout << "Value of i: " << i << endl;
    }
cout << "-------------------" << endl;
 return 0;
}