#include <iostream>
using namespace std;
class base // super or parent
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

class derived : public base // child
{
public:
    int x, y;
    void getdataind()
    {
        cout << "Enter two values:";
        cin >> x >> y;
    }
    void subtraction()
    {
        int answer = x - y;
        cout << "Subtraction= " << answer;
    }
};
int main()
{
    base obj1;
    derived obj2;
    obj1.getdata();
    obj1.addition();
    obj2.getdataind();
    obj2.subtraction();
    obj2.getdata();
    obj2.addition();
    // obj1.getdata();
    // obj1.addition();
    // obj2.getdata();
    // obj2.subtraction();
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