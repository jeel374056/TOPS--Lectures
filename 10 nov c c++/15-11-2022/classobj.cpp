#include <iostream>
using namespace std;

class human
{

public:
    // VARIABLE
    // FUNCTION---METHODS
    int x = 20;
    void showx();
};

void human::showx()
{
    cout << x;
}

int main()
{
    human obj1;
    human obj2;
    obj1.showx();
    obj2.showx();
    return 0;
}