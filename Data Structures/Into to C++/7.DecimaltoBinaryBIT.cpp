#include <iostream>
#include <cmath>
using namespace std;

int decimalToBinary(int n) {
    if (n == 0)
        return 0;

    float binary = 0;
    int i = 0;
    while (n > 0) {
        int bit = n & 1;
        binary = bit*pow(10,i++)+ binary;
        n >>= 1;
    }

    return binary;
}

// Note: pow() is a floating-point operation, which can introduce inaccuracies due to floating-point precision issues. It's best to avoid using pow() for integer operations.
// to fix either use binaryno(variable) as float data type or put the pow in (int)ceil(pow((10,i++)))
int main() {
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    int binaryNumber = decimalToBinary(decimalNumber);

    cout << "Binary equivalent: " << binaryNumber << endl;

    return 0;
}
