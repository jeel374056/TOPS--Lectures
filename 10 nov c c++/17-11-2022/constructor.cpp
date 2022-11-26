#include <iostream>
using namespace std;

/*
constructor is a type of function which is called automatically when we define object;
constructor name is same as class

*/

class user
{
public:
    int x, y;
    // default consrtuctor
    user()
    {
        int x, y;
        cout << "Enter two values";
        cin >> x >> y;
        this->y = y;
        this->x = x;
    }
    

    // void getdata()
    // {
    //     int x, y;
    //     cout << "Enter two values";
    //     cin >> x >> y;
    //     this->y = y;
    //     this->x = x;
    // }
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
    user obj2;
    obj1.addition();
    obj2.addition();
    return 0;
}
