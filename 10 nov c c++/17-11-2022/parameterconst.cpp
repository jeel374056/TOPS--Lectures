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
    user(int a, int b)
    {
        int answer = a + b;
        cout << "Addition=" << answer;
    }
    // user(int a, int b, int c)
    // {
    //     int c = a - b;
    // }

    // void getdata()
    // {
    //     int x, y;
    //     cout << "Enter two values";
    //     cin >> x >> y;
    //     this->y = y;
    //     this->x = x;
    // }
    // void addition()
    // {
    //     int answer = x + y;
    //     cout << "Addition =" << answer;
    // }

    void showdata()
    {
        cout << "Value of x is" << x << "\n";
        cout << "value of y is" << y;
    }
};

int main()
{
    int a, b;
    cout << "enter two values: ";
    cin >> a >> b;
    user obj1(a, b);
    user obj2;
    // user obj3(10, 20, 30);
    // obj1.addition();
    // obj2.addition();
    return 0;
}
