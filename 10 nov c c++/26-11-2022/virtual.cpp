#include <iostream>
using namespace std;
class A
{
public:
    virtual void addition()
    {
        cout << "Class A no addition";
    }
};
class B : public A
{
    void addition()
    {
        cout<<"Class b no addition";
    }
};
int main()
{
    B obj1;
    A *obj2=&obj1;
    obj2->addition();
    return 0;
}