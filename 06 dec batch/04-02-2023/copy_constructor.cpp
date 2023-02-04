#include <iostream>
using namespace std;
class demo
{
public:
    int x, y;
    demo()
    {
    }
    demo(demo &obj1)
    {
        x = obj1.x;
        y = obj1.y;
    }
    void printvalue()
    {
        cout << "X= " << x << endl;
        cout << "Y= " << y << endl;
    }
};
int main()
{
    demo d1;
    d1.x = 50;
    d1.y = 100;
    demo d2(d1);
    demo d3 = d1;
    d1.printvalue();
    d2.printvalue();
    d3.printvalue();
    return 0;
}

/*
class student
{
void function1(int a,float b)
{
grfhrthrthrthrthrt
h
rth


student(student obj1)
}
}

main()
{
     students1,s2;
    s1(s2)
}


*/