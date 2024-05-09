#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int binary) {
    int decimal = 0, 
    i=0;

    while (binary) {
        int bit = binary % 10;
        decimal += bit*pow(2,i++);
        binary /= 10;
    }
    return decimal;
}


int main() {
    int binaryNumber;
    cout << "Enter a binary number: ";
    cin >> binaryNumber;
    
    int decimalNumber = binaryToDecimal(binaryNumber);
    cout << "Decimal equivalent: " << decimalNumber << std::endl;
    
    return 0;
}