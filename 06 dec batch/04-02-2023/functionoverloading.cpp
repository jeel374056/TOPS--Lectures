#include<iostream>
using namespace std;
class calculation
{
    public:
    void addition()
    {
        cout<<"No numbers to add";
    }
    void addition(int a)
    {
        cout<<"How to add only single value: "<<a;
    }
    void addition(int a,int b)
    {
        cout<<"Addition= "<<a+b;
    }
    void addition(int a,int b,int c)
    {
        cout<<"Addition= " <<a+b+c;
    }
};
int main()                                     
{
    calculation c1;
    c1.addition(25,30,60);
    c1.addition();
    c1.addition(25);
    c1.addition(25,40);
return 0;
}