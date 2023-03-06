#include <iostream>
using namespace std;
class B;
class A
{
public:
    int a;
    void getdata()
    {
        cout << "Enter VAlue: ";
        cin >> a;
    }
    friend void showdata(A, B);
};
class B
{
public:
    int b;
    void getvalue()
    {
        cout << "Enter number: ";
        cin >> b;
    }
    friend void showdata(A, B);
};

void showdata(A obj1, B obj2)
{
    cout << "Value of a " << obj1.a << endl;
    cout << "Value of b " << obj2.b << endl;
}

int main()
{
    A a1;
    B b1;
    a1.getdata();
    b1.getvalue();
    showdata(a1, b1);
    return 0;
}
/*
friend returntype functionname(parameters object of class)


*/