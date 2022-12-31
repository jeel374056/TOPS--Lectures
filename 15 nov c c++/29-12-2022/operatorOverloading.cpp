/*

void operator+(parameters)
{
    body
}

int a=65;
int b=5;
a+b;
89+5;

class A  x  y
Obj1 x y
Obj2 x y
obj1+obj2;

*/
#include <iostream>
using namespace std;
class A
{
public:
    int x, y;
    void getdata()
    {
        cout << "Enter Value: ";
        cin >> x, y;
    }
} ;
int main()
{
    A obj1,obj2;
    obj1+obj2;
    return 0;
}