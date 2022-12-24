#include <iostream>
using namespace std;
class calculation
{
public:
    int a, b;
    calculation(int m, int n)
    {
        // this->a = a;
        // this->b = b;
        a=m;
        b=n;
    }
    void addition()
    {
        int answer = a + b;
        cout << "Addition= " << a + b;
    }
};
int main()
{
    calculation obj1(50,30);

    return 0;
}