#include <iostream>
using namespace std;
int main()
{
    class user
    {
    public:
        int a;
        void takedata()
        {
            cout << "Enter number";
            cin >> a;
        }
        void showdata()
        {
            cout << "the value of a is :" << a;
        }
    };

    user obj1;
    user obj2;
    user obj3;
    obj1.takedata();
    obj1.showdata();
    obj2.showdata();
    return 0;
}