#include <iostream>
using namespace std;
class demo
{
public:
    int a, b;
    demo()
    {
        a=0;
        b=0;
        // cout << "Deafult constructor";
    }
    demo(int x, int y)
    {
        a = x;
        b = y;
    }
    void showdata()
    {
        cout << "Value of a : " << a << endl;
        cout << "Value of b : " << b << endl;
    }

    demo operator++(int)
    {
        a+=20;
        b+=30;
    }



};
int main()
{
    demo d1(58, 96),d2;
    d1.showdata();
    d1++;
    d1.showdata();
    d2++;
    d2.showdata();
    return 0;
}
/*
classname operator symbol(parameters)
{
    body
}



*/