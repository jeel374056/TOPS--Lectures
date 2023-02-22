#include <iostream>
using namespace std;
template <class t1>
class calculate
{
public:
    t1 a, b;
    calculate()
    {
        cout << "Enter Values: ";
        cin >> a >> b;
    }
    void addition()
    {
        t1 answer = a + b;
        cout << "Addition = " << answer << endl;
    }
    void subtraction()
    {
        t1 answer = a - b;
        cout << "subtraction = " << answer << endl;
    }
};
int main()
{
    calculate<int> c1;
    calculate<float> c2;
    c1.addition();
    c1.subtraction();
    c2.addition();
    c2.subtraction();
    return 0;
}