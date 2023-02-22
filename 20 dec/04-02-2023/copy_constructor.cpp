#include <iostream>
using namespace std;
class demo
{
public:
    int a;
    int b;
    demo() {}
    demo(demo &obj1)
    {
        a = obj1.a;
        b = obj1.b;
    }
    void showvalue()
    {
        cout << "a= " << a << " b= " << b << endl;
    }
};
int main()
{
    demo d1;
    d1.a = 45;
    d1.b = 89;
    // d2=d1;
    demo d2(d1);
    demo d3(d1);
    d1.showvalue();
    d2.showvalue();
    d3.showvalue();
    return 0;
}
/*
copy constructor

    classname(classname &obj1)
    {

    }

    obj1(obj2);
    obj1=obj2;


void fun1(int a,int b)
{
    cout<<"A= "<<a<<"B= "<<b;
}

int main()
{
    x=58;
    y=69;
    fun1(x,y)

}



*/