#include <iostream>
using namespace std;

int main() {
    
int age = 10;
float pi = 3.14;
bool isTrue = true;
double largePi = 3.14159265358979323846;
char letter = 'A';

std::cout <<"Size of int : " << sizeof(age) << std::endl;
std::cout <<"Size of float : " << sizeof(pi) << std::endl;
std::cout <<"Size of bool : " << sizeof(isTrue) << std::endl;
std::cout <<"Size of double : " << sizeof(largePi) << std::endl;
std::cout <<"Size of char : " << sizeof(letter) << std::endl;

return 0;
}
