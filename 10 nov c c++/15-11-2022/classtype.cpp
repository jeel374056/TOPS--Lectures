#include <iostream>
using namespace std;
class user
{
    int x, y;

public:
    void getdata(int x, int y); // method //declaration
    // {
    //     this->x = x;
    //     this->y = y; //>> insertion operator
    // }
    // definition with declaration
    void addition()
    {
        int anser = x + y;
        cout << "answer=" << anser;
    }
};
class like
{
    int x, y;

public:
    void getdata(int x, int y); // method //declaration
    // {
    //     this->x = x;
    //     this->y = y; //>> insertion operator
    // }
    // definition with declaration
    void addition()
    {
        int anser = x + y;
        cout << "answer=" << anser;
    }
};

// void like::getdata(int x,int y)
// {
//         this->x = x;
//         this->y = y; //>> insertion operator
// }
/////definition

int main()
{
    user obj1;
    int a, b;
    cout << "enter two value";
    cin >> a >> b;
    obj1.getdata(a, b);
    obj1.addition();
    return 0;
}

/*
banne kam class ni andar hoyyy

*/