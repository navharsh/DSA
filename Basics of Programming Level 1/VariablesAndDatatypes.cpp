#include<iostream>
using namespace std;

int main(){
    cout<<4<<5<<6;
    cout<<endl;
    //declaration
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    cout<<age<<endl;
    //initialisation
    int marks=10; //assign value 10 to age.
    cout<<marks<<endl;
    float f=12.08;
    cout<<sizeof(f)<<endl;
    //out of range : char: -128 to 127
    char ch=128;
    cout<<ch<<endl;
    short value=32770;
    cout<<value<<endl;
    cout<<sizeof(value)<<endl;
    return 0;
}