#include <iostream>
#include <cmath>
using namespace std;
class demo
{
public:
    void calculation()
    {
        int a;
        cout << "Enter Value ";
        cin >> a;
        cout << "Square Root = " << sqrt(a);
    }
    void calculation(int a)
    {
        cout << "Value of a is" << a << endl;
    }
    void calculation(int a, int b)
    {
        cout << "value of a is " << a << " b is " << b << endl;
    }
};
int main()
{
    demo d1;
    d1.calculation();
    d1.calculation(58);
    d1.calculation(48, 645);
    return 0;
}
/*
in function overloading we have multiple function of same name within one class.

but the numbers of parameters will be different

one object can call all this function by passing different parameters


*/