#include <iostream>
using namespace std;
class calculation
{
public:
    int a, b;
    calculation()
    {
        cout << "Enter Values: ";
        cin >> a >> b;
    }
    void sum()
    {
        int answer = a + b;
        cout << "Answer= " << answer << endl;
    }
    void sum(int x)
    {
        a = a + x;
        b = b + x;
        cout << "A= " << a << "B= " << b << endl;
    }
    void sum(int m, int n)
    {
        a = a + m;
        b = b + n;
        cout << "A= " << a << "B= " << b << endl;
    }
};
int main()
{
    calculation c1;
    c1.sum();
    c1.sum(20);
    c1.sum(50,80);
    return 0;
}