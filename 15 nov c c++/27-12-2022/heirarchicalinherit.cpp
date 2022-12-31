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

class child1:public classA
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
class child2:public classA
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
    child obj1;
    obj1.getvalue();
    obj1.getsome();
    obj1.getdata();
    obj1.multiply();

    return 0;
}