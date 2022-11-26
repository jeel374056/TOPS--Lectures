#include <iostream>
using namespace std;
int main()
{
    class user
    {
    public:
        int a;
        int b;

        void show()
        {
            printf("Hello");
        }
    };

    user obj1;
    user obj2;
    obj1.a = 95;
    cout << obj1.a << "\n";
    cout << obj2.a;
    return 0;
}

// << exertion operator>> insertion operator ::scope resolution operator;