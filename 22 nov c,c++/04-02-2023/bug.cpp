#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a;
    string name;
    cout << "Enter A: ";
    cin >> a;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, name);
    getch();
    return 0;
}