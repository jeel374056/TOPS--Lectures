#include <iostream>
using namespace std;
class calculation
{
public:
    int a, b;
    void addition()
    {
        cout << "Enter Two Values: ";
        cin >> a >> b;
        cout << "Addition = " << a + b << endl;
    }
    void addition(int a)
    {
        cout << "Enter Value to be added: ";
        cin >> b;
        cout << "Addition = " << a + b << endl;
    }
    void addition(int a, int b)
    {
        cout << "Addition = " << a + b << endl;
    }
};
void addition(int a)
{
    int b;
    cout << "Enter Value to be added: ";
    cin >> b;
    cout << "Addition = " << a + b << endl;
}
void addition(int a, int b)
{
    cout << "Addition = " << a + b << endl;
}
int main()
{
    calculation c1, c2;
    // c1.addition();
    // c1.addition(14);
    // c1.addition(24, 28);
    // c1+c2;
    addition(100);
    addition(14, 26);
    return 0;
}