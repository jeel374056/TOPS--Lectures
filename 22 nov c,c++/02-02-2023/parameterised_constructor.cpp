#include <iostream>
using namespace std;

class general
{
public:
    int a, b;
    general() //default
    {
        cout << "Good morning";
    }
    general(int x, int y)
    {
        cout << "Parameterised constructor";
        a = x;
        b = y;
    }
    general(int m)
    {
        cout << "One parameter constructor";
    }
    // general(int z)
    // {
    //     cout << "Hello World";
    // }
};
int main()
{
    general obj1(25, 30), obj2(25), obj3;
    return 0;
}