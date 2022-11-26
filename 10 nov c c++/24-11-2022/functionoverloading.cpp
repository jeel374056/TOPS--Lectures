/*
FUnction Overloading
*/
#include <iostream>
using namespace std;
class A
{
public:
    void area(int r)
    {
        cout << "area of circle = " << 3.14 * r * r;
    }
    void area(int l, int b)
    {
        cout << "Area of rectnagle = " << l * b;
    }
};
int main()
{
    A obj1;
    obj1.area(5);
    obj1.area(25, 30);
    return 0;
}
/*
In function overloading function name can be given by us...but at time of constructor we cannot give name 

constrctur called automatically when object is defined and different parameters passed

In function we have to called it using object 
one object can call only one constructor

one object can call all the functions

*/