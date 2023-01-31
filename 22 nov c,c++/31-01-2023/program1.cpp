#include <iostream>
using namespace std;
void calculation()
{
    int a, b, answer;
    cout << "Enter Two Value: ";
    cin >> a >> b;
    answer = a + b;
    cout << "Addition = " << answer;
}
int main()
{
    calculation();
    return 0;
}