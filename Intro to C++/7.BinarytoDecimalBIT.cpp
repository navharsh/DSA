#include <iostream>
#include <cmath>
using namespace std;
int binarytodecimalbitwise(int n)
{
    int decimal = 0;
    int i = 0;
    while (n)
    {
        int bit = (n & 1);
        decimal = decimal + bit * pow(2, i++);
        n = n / 10;
    }
    return decimal;
}

int main() {
    int n;
    cout << "Enter the binary number: ";
    cin >> n;
    cout << "Decimal equivalent: " << binarytodecimalbitwise(n);
    return 0;
}
