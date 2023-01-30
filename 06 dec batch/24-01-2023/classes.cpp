#include <iostream>
using namespace std;
// how to make a class
class normal
{
public: // access modifiers
    // variables
    int a, b;
    // function()
    void addition()
    {
        int c = a + b;
        cout << "Addition = " << c;
    }
};

int main()
{
    // how to make a object
    normal bo,c,d;
    bo.a=50;
    bo.b=80;
    bo.addition();
    return 0;
}