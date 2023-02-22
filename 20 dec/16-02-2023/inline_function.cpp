#include <iostream>
using namespace std;
class B
{
public:
    int y = 50;
    inline void showvalue()
    {
        cout << "Class B  x = " << y << endl;
    }
};
int main()
{
    B b1;
    return 0;
}
/*
pure virtual function

*/