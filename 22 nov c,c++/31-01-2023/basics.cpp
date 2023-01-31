#include <iostream>
// using namespace std;
int main()
{
    int a;
    std::string name;
    std::cout << "Enter VAlue and name ";
    std::cin >> a;
    getline(std::cin, name);
    std::cout << "Hello " << a << " is the value " << name << " is the name";
    return 0;
}
/*
hello 98 is the value
printf("hello %d is the value",a);
int a;
scanf("%d",&a);
<< exertion opearator
>> insertion operator
:: scope resolution operator

*/