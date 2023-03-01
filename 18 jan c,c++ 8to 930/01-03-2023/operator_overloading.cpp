#include <iostream>
using namespace std;
class demo
{
public:
    int a, b;
    float c[20];
    void getdata()
    {
        cout << "Enter Values : ";
        cin >> a >> b;
    }
    void showvalue()
    {
        cout << "A = " << a << "B = " << b << endl;
    }
    demo operator++(int)
    {
        a = a + 90;
        b = b + 90;
    }
};
int main()
{
    demo d1;
    int z=48,y=32;
    // z>y?printf("Z is graeter"):printf("y is greater");
    printf("%d",sizeof(d1));
    // d1.getdata();
    // d1.showvalue();
    // d1++;
    // d1.showvalue();

    return 0;
}
/*
++
89+32
a+b

classname operator symbol(parameters)
{
    body
}
int a[10];


?:
condition?code when true:code when false
*/