#include <iostream>
using namespace std;
class demo
{
public:
    int a, b;
    void getdata()
    {
        cout << "Enter Two VAlues: ";
        cin >> a >> b;
    }
    void showdata()
    {
        cout << "A = " << a << " b = " << b << endl;
    }
    demo operator++(int)
    {
        a = a + 30;
        b = b + 20;
    }
};
int main()
{
    demo d1, d2;
    d1.getdata();
    d1.showdata();
    d1++;
    d1.showdata();
    return 0;
}
/*
classname operator symbol(class object/datatype)
{
    body;
}


*/
;