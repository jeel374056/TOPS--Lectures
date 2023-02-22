#include <iostream>
using namespace std;
class demo
{
public:
    int l = 10;

private:
    int m = 20;

protected:
    int n = 30;

    friend void show(demo &obj);
};
void show(demo &obj)
{
    cout << "l= " << obj.l << "m= " << obj.m << "n= " << obj.n;
}
int main()
{
    demo d1;
    show(d1);
    return 0;
}