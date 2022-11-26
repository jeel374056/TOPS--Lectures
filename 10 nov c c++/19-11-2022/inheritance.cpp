#include <iostream>
using namespace std;
class base
{
public:
    int a, b;
    void getdata()
    {
        cout << "Enter two values:";
        cin >> a >> b;
    }
    void addition()
    {
        int answer = a + b;
        cout << "Addition= " << answer;
    }
};

class derived
{
public:
    int a, b;
    void getdata()
    {
        cout << "Enter two values:";
        cin >> a >> b;
    }
    void subtraction()
    {
        int answer = a - b;
        cout << "Subtraction= " << answer;
    }
};
int main()
{
    base obj1;
    derived obj2;
    obj1.getdata();
    obj1.addition();
    obj2.getdata();
    obj2.subtraction();
    return 0;
}
/*

inheritance
one class can use properties of another class
jena use thase enee kahvay   base class ----parent class---superclass
je use karse------ derived class----child classs----subclass

types of inheritance______

simple inheritance
multiple inheritance
multilevel inheritance
heirarchical inheritance
hybrid inheritance
*/