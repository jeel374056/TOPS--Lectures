#include <iostream>
using namespace std;
class calculation
{
public:
    int a, b;
    calculation() //default constructor
    {

        cout << "Enter Two Values: ";
        cin >> a >> b;
    }
    void addition()
    {
        cout << "Addition= " << a + b;
    }
    void subtraction()
    {
        cout << "Addition= " << a - b;
    }
    void Division()
    {
        cout << "Addition= " << a / b;
    }
    void multiplication()
    {
        cout << "Addition= " << a * b;
    }
};
int main()
{
    calculation obj1;
    obj1.addition();
    obj1.subtraction();
    return 0;
}