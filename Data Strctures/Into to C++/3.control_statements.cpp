#include <iostream>
using namespace std;
int main() {
    int num = 5;

    // if-else statement
    if (num > 0) {
        cout << "Number is positive." << endl;
    } else {
        cout << "Number is non-positive." << endl;
    }

    //if-else-if statement
    if (num > 0) {
        cout << "Number is positive." << endl;
    } else if (num < 0) {
        cout << "Number is negative." << endl;
    } else {
        cout << "Number is zero." << endl;
    }


    // nested else statement
    if (num > 0) {
        cout << "Number is positive." << endl;
    } else if (num < 0) {
        cout << "Number is negative." << endl;
    } else {
        cout << "Number is zero." << endl;
    }

    // switch statement
    int choice = 2;
    switch (choice) {
        case 1:
            cout << "Choice is 1." << endl;
            break;
        case 2:
            cout << "Choice is 2." << endl;
            break;
        case 3:
            cout << "Choice is 3." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }   

    // ternary operator
    int a = 5, b = 10;
    int max = (a > b) ? a : b;
    cout << "Max is: " << max << endl;



    return 0;
}