#include <iostream>
using namespace std;
class calculation
{
public:
    int a, b;
    calculation(int a, int b) // parameter
    {
        this->a = a;
        this->b = b;
    }
    calculation() // deafult
    {
        a = 0;
        b = 0;
    }
    void getdata()
    {
        cout << "Enter Value Of a And b: ";
        cin >> a >> b;
    }
    void addition()
    {
        int answer = a + b;
        cout << "Answer= " << answer;
    }
    // void show_answer()
    // {
    // }
};
int main()
{
    calculation c1(20, 30), c2;
    // c1.getdata();
    c1.addition();
    return 0;
}