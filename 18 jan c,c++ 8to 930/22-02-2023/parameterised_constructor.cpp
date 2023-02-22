#include <iostream>
using namespace std;
class demo
{
public:
    int a, b, c, d, e;
    demo()
    {
        cout << "Default one called" << endl;
    }
    demo(int x)
    {
        cout << "one parameter" << endl;
    }
    demo(int m, int n)
    {
        cout << "two parameter" << endl;
    }
};
int main()
{
    demo d1, d2, d3(25), d4, d5(28, 89);
    return 0;
}