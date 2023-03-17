#include <iostream>
using namespace std;
class demo
{
public:
    int a = 45;
    int b = 87;

    demo() // deafault constructor
    {
        cout << "a= " << a << " b = " << b;
    }
    demo(int n)
    {
        cout << "n= " << n;
    }
    demo(int x, int y)
    {
        cout << "X= " << x << "Y= " << y;
    }

    //    void datadisplay()
    //    {
    //        cout << "a= " << a << " b = " << b;
    //    }
};
int main()
{
    demo d1, d2(112), d3, d4(115, 698);
    //    d1.datadisplay(); //function call
    return 0;
}
/*
constructor is a special function

we have to call a normal function but in case of constructor it will be called automatically when object is defined

normal functions have return type and it return something
but constructor not return anything

constructor is used for initialization purpose

constructor name is same as class name .

Types of constructor
1)default constructor
2)parameterised constructor

constructor is a first function which is run by any object

do task

*/