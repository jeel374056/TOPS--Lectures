#include <iostream>
using namespace std;

class user
{
public:
    int x, y;
    void getdata()
    {
        int x, y;
        cout << "Enter two values";
        cin >> x >> y;
        this->y = y;
        this->x = x;
    }
    void addition()
    {
        int answer = x + y;
        cout << "Addition =" << answer;
    }

    void showdata()
    {
        cout << "Value of x is" << x << "\n";
        cout << "value of y is" << y;
    }
};

int main()
{
    user obj1;
    obj1.getdata();
    obj1.showdata();
    obj1.addition();

    user obj2;
    obj2.getdata();
    obj2.showdata();

    return 0;
}
