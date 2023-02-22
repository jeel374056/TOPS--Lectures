#include <iostream>
using namespace std;
class calculation
{
public:
    calculation()
    {
        cout << "Deafult called";
    }
    calculation(int m)
    {
        cout << "M= " << m << endl;
    }
    calculation(int k)
    {
        cout << "K= " << k << endl;
    }
    calculation(int a, int b)
    {
        cout << "A= " << a << "B= " << b << endl;
    }
    void fun1()
    {
        cout << "Function 1\n";
    }
    void fun2()
    {
        cout << "Function 2\n";
    }
    void fun3()
    {
        cout << "Function 3\n";
    }
};
int main()
{
    calculation c1, c2(58), c3(58, 26);
    c1.fun1();
    c1.fun2();
    c1.fun3();
    return 0;
}