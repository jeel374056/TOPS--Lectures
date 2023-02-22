#include <iostream>
using namespace std;
template <class T1, class T2>
class calculation
{
public:
    T1 a;
    T1 b;
    T2 m;
    T2 n;
    void getdata()
    {
        cout << "Enter Values: ";
        cin >> a >> b;
        cout << "Enter Values: ";
        cin >> m >> n;
    }
    void showdata()
    {
        cout << "A = " << a << endl;
        cout << "B = " << b << endl;
        cout << "M = " << m << endl;
        cout << "N = " << n << endl;
    }
};
int main()
{
    calculation<string, int> c1, c2, c3;
    c1.getdata();
    c1.showdata();
    return 0;
}