#include <iostream>
using namespace std;
class classA
{
public:
    int a, b, answer;
    void getsome()
    {
        cout << "Enter Values of A And B: ";
        cin >> a >> b;
    }
    void calculate()
    {
        answer = a + b;
        cout << "Answer is " << answer;
    }
};

class classB
{
public:
    int x, y, sub;
    void getvalue()
    {
        cout << "Enter Values of X And Y: ";
        cin >> x >> y;
    }
    void calculate()
    {
        sub = x - y;
        cout << "Answer is " << sub;
    }
};
class child : public classA,public classB
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
        classA::calculate();
        classB::calculate();
        mul = m * n;
        cout << "Answer is " << mul;
    }
};
int main()
{
    child obj1;
    obj1.getvalue();
    obj1.getsome();
    obj1.getdata();
    obj1.multiply();

    return 0;
}