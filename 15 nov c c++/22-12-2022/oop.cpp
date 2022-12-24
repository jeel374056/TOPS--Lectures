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
    void show_addition()
    {
        cout << "Addition=" << answer;
    }
};
int main()
{
    student obj1, obj2, obj3, obj4;
    obj1.getdata();
    obj1.addition();
    obj1.show_addition();
    // obj2.getdata();
    // obj2.addition();
    obj2.show_addition();
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
