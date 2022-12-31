#include <iostream>
using namespace std;
class A
{
public:
    int a = 90, b = 45, answer;

    virtual void addition()
    {
        answer = a + b;
        cout << "Addition= " << answer;
    }
};
class B : public A
{
public:
    int x = 80, y = 70, add;

    void addition()
    {
        add = x + y;
        cout << "Addition in b = " << add;
    }
};
int main()
{
    B obj1;
    obj1.addition();
    A obj2;
    obj2.addition();
    return 0;
}