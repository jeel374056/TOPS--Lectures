#include <iostream>
using namespace std;
class user
{
public:
    void showx()
    {
        int a = 10, b = 20;
        printf("addition of %d and %d is %d", a, b, a + b);
    }
};
int main()
{
    user obj1;
    obj1.showx();
    return 0;
}