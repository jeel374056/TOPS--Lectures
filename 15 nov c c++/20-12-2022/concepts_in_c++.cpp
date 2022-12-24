#include <iostream>
using namespace std;
int m;
class student
{
public:
    int a, b, answer;
    void getdata()
    {
        cout << "Enter Two Numbers: ";
        cin >> a >> b;
    }
    void addition()
    {
        answer = a + b;
        // cout << "Addition = " << answer;
    }
    void show_addition();
    
    void increment_S()
    {
        int s=0;
        s++;
        cout << "S = " << s;
    }
};
// int student::s = 0;
void student::show_addition()
{
    cout<<"Addition=something";
}
int main()
{
    student obj1, obj2, obj3, obj4;
    obj1.increment_S();
    obj2.increment_S();
    // student::s = 25;
    // cout << "value of s= " << student::s;
    // obj1.getdata();
    // obj1.addition();
    // obj3.getdata();
    // obj3.addition();
    // obj2.a=45;
    // obj2.b=98;
    // obj2.addition();
    return 0;
}

/*
class syntax

class classname{
    access modifiers -- public private protected
    variables---data members
    functions---member functions--method
};

object syntax:

inside main()

classname objectname;

class
objects
constructor
destructor
Ecapsulation
inheritance
    5 types
    single inheritance
    multiple inheritance
    multilevel
    hierarchical
    hybrid

polymorphism

compile time
    operator overloading
    function overloading

run time
    virtual function

friend function

*/