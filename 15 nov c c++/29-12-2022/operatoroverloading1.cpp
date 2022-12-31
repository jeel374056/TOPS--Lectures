#include<iostream>
using namespace std;

class A{
    public:
    int x;
    A()
    {
    }
    A(int i)
    {
        x=i;
    }
    void operator+(A m)
    {
        int answer=x+m.x;
        cout<<"Addition= "<<answer;
    }
};
int main()
{
A obj1(20);
A obj2(30);
obj1+obj2;
return 0;
}

// ?:
