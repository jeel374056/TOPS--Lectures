#include <iostream>
using namespace std;
void table(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " X " << i << " = " << n * i << endl;
    }
}
int main()
{
    int x;
    cout << "Enter Value for Table: ";
    cin >> x;
    table(x);

    return 0;
}