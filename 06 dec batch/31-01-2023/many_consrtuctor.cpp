#include <iostream>
using namespace std;

class many_construct
{
public:
    many_construct()
    {
        int r;
        cout << "Enter Radius: ";
        cin >> r;
        cout << "Area Of circle = " << 3.14 * r * r;
    }

    many_construct(int a)
    {
        cout << "Square= " << a * a;
    }
    many_construct(int x, int y)
    {
        cout << "Multiplication= " << x * y;
    }
};
int main()
{
    many_construct m1;
    return 0;
}