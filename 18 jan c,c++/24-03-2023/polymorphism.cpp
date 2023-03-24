// Function overloading
#include <iostream>
using namespace std;
class calculation
{
public:
    int a, b;
    void addition()
    {
        printf("Zero PAramaters");
    }
    void addition(int m)
    {
        printf("one paramaters");
    }
    void addition(int m, int n)
    {
        printf("Two Paramters");
    }
};
int main()
{
    calculation c1;
    c1.addition();
    c1.addition(58);
    c1.addition(11, 23);
    return 0;
}
/*
Types of polymorphism
1)Compile time Polymorphism
    function overloading
    operator overloading
2)Run time polymorphism
    virtual function

*/