#include <iostream>
using namespace std;
class A
{
public:
    void display()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Hello" << endl;
        }
    }
};
class B : public A
{
public:
    void display()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Hello" << endl;
        }
    }
};
int main()
{
    A a1;
    B b1;
    a1.display();
    b1.display();
    return 0;
}