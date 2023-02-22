#include <iostream>
using namespace std;
class demo
{
public:
    int x, y;
    demo(int a, int b)
    {
        this->x = x;
        this->y = y;
        x=a;
        y=b;
    }
    inline void showdata()
    {
        cout << "X= " << x << " Y= " << y;
    }
};
int main()
{
    demo d1(56, 58);
    d1.showdata();
    // cout << "X= " << x << " Y= " << y;
    return 0;
}