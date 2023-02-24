#include <iostream>
using namespace std;
class demo
{
public:
    int x;
    demo()
    {
        cout << "Consructor Called: " << endl;
    }
    void getdata()
    {
        cout << "Enter Value: ";
        cin >> x;
    }
    void showdata()
    {
        cout << "X= " << x << endl;
    }
    ~demo()
    {
        cout << "Desturctor Called: " << endl;
    }
};
int main()
{
    demo d1, d2, d3, d4;
    d1.getdata();
    d2.getdata();
    d3.getdata();
    d1.showdata();
    d2.showdata();
    d3.showdata();
    d4.showdata();
    return 0;
}