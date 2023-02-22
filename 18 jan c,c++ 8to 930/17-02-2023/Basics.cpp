#include <iostream>
using namespace std;

int main()
{
    // int a, b, answer;
    // cout << "Enter Two Numbers";
    // cin >> a >> b;
    // answer = a + b;
    // cout << "Answer = " << answer;
    // cout << "value of a is " << a << " ans it is sammler than value of y which is " << b<<endl;
    string name;
    int rollno;
    cout << "Enter Rollno ";
    cin >> rollno;
    cout << "Enter NAme: ";
    cin.ignore();
    getline(cin, name);
    cout << "Your Name is " << name << " yOur Rollno is " << rollno << endl;
    return 0;
}
// a = 10 b = 20

//     value of a is 10 ans it is sammler than value of y which is 20

/*
::  SCOPE RESOLUTION OPERATOR
<< EXERTION OPERATOR
>> insertion operator

POP--Procedure Oriented LAnguage
OOP--Object ORiented LAnguage
Class And Object
Class---DATA MEMBERS(VARIABLES)
    ----MEMER FUNCTION(METHOD)
constructor and destructor
object
encapsulation
inheritance
polymorphism
abstraction
*/