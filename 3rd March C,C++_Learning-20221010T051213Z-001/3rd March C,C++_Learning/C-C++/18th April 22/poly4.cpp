#include <iostream>
using namespace std;

// operator overloading

class Base
{
    string a;

public:
    Base(string a)
    {
        this->a = a;
    }
    void display()
    {
        cout << a << endl;
    }
    Base operator+(Base obj)
    {
        string temp;
        temp = a + obj.a;
        return temp;
    }
};

int main()
{
    Base b1("Hello"), b2("world");
    Base b3 = b1 + b2;
    b3.display();
    return 0;
}