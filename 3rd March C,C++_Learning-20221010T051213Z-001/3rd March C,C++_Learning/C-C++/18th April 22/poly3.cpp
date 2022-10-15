#include <iostream>
using namespace std;

// operator overloading

class Base
{
    int a;

public:
    Base(int a)
    {
        this->a = a;
    }
    void display()
    {
        cout << a << endl;
    }
    Base operator-(Base b)
    {
        int temp;
        temp = a - b.a;
        return temp;
    }
};

int main()
{
    Base b1(100), b2(20);
    Base b3 = b1 - b2;
    b3.display();
    return 0;
}