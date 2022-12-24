/*
class---data members (variables)
        member function(simple function)
*/
#include <iostream>
using namespace std;
class base
{
public:
    int a, b, answer;
    void getdata()
    {
        cout << "Enter Values of A And B: ";
        cin >> a >> b;
    }
    void addition()
    {
        answer = a + b;
        cout << "Answer is " << answer;
    }
};

class derived : public base
{
public:
    int x, y, sub;
    void getvalue()
    {
        cout << "Enter Values of X And Y: ";
        cin >> x >> y;
    }
    void subtraction()
    {
        sub = x - y;
        cout << "Answer is " << sub;
    }
};
class grandson : public derived
{

public:
    int m, n, mul;
    void getdata()
    {
        cout << "Enter Values of m And n: ";
        cin >> m >> n;
    }
    void multiply()
    {
        mul = m * n;
        cout << "Answer is " << mul;
    }
};
int main()
{
grandson obj1;
obj1.getdata();
    return 0;
}