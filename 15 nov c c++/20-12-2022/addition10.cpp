#include <iostream>
using namespace std;
int main()
{
    int a[10], sum = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter number: ";
        cin >> a[i];
        sum += a[i];
    }
    cout << "Sum of numbers is : " << sum<<endl;

    return 0;
}