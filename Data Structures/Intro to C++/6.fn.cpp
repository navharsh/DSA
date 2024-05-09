#include<iostream>
using namespace std;


void printCounting()
{
    for (int i = 0; i < 3; i++)
    {
        cout << i << endl;
    }
}

void sum(int a, int b)
{
    cout << "Sum is: " << a + b << endl;
    return;
}

void printMyName(int n);
int sub (int a, int b) 
{
    return a - b;
}
int main()
{
    printCounting(); //function call
    cout << "Enter two numbers: " << endl;
    int a, b;
    cin >> a >> b;
    sum(a,b); //function call with arguments
    int s = sub(a,b);
    cout << "Difference is: " << s << endl;
    printMyName(3);

    return 0; 

}

void printMyName(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Senpai" << endl;
    }
}