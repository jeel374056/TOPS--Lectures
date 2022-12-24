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

int main()
{
    base obj1, obj2;
    // obj1.getdata();
    // obj1.addition();
    // derived o1, o2;
    // o1.getdata();
    // o1.getvalue();
    // o1.addition();
    // o1.subtraction();
    return 0;
}