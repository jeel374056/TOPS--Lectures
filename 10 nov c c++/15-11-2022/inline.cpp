#include <iostream>
using namespace std;

inline void addition()
{
    int x = 10, y = 25;
    int answer = x + y;
    cout << "addition=" << answer;
}

int main()
{
    addition();
    return 0;
}