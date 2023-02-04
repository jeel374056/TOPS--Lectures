#include <iostream>
using namespace std;
class demo
{
public:
    demo()
    {
        cout << "Constructor Called" << endl;
    }
    void showdata()
    {
        cout << "Function Called" << endl;
    }
    ~demo()
    {
        cout << "Destructor calleed" << endl;
    }
};
int main()
{
    demo d1, d2;
    d1.showdata();
    d2.showdata();
    return 0;
}