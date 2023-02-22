#include <iostream>
using namespace std;
class demo
{
public:
    int array1[5];
    int answer[5];
    void getarray()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter Value : ";
            cin >> array1[i];
        }
    }
    demo operator+(demo obj)
    {
        for (int i = 0; i < 5; i++)
        {
            answer[i] = array1[i] + obj.array1[i];
            cout << answer[i];
        }
    }
};
int main()
{
    demo d1, d2;
    d1.getarray();
    d2.getarray();
    d1 + d2;
    // d1.+(d2);

    return 0;
}