#include <iostream>
using namespace std;

class A
{
public:
    void display();
};

void A ::display()
{
    cout << "Hello Everyone....";
}

int main()
{
    A a1;
    a1.display();
    return 0;
}