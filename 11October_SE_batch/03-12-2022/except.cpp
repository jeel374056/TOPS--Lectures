#include <iostream>
using namespace std;
int main()
{
    try
    {
        int a = 10;
        int b = 0;
        int c = a / b;
        cout << c;
    }
    catch()
    {
        cout << "Hello";
    }
    return 0;
}