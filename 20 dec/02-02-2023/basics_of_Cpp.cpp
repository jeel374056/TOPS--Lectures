#include <iostream>
using namespace std;
int main()
{
    string name;
    int a;
    cout << "Hello World";
    cout << "Enter Name: ";
    // cin >> name;
    getline(cin, name);
    cout << "Your name is " << name;
    cout << "Enter number :";
    cin >> a;
    cout << "The value of a is " << a << " and it is less than 100";
    return 0;
}
/*
::  scope resolution operator
<< exertion operator
>> insertion operator

int a=45;
printf("the value of a is %d and it is less than 100",a);
char name[20];
int num[10];

*/