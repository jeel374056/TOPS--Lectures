#include <iostream>
using namespace std;
class demo
{
public:
    int x;
    demo()
    {
    }
    demo(demo &obj1) // copy constrcutor
    {
        x = obj1.x;
    }
    void showdata()
    {
        cout << "X= " << x << endl;
    }
};

int main()
{

    demo d1;
    d1.x = 85;
    d1.showdata();
    demo d2(d1);
    demo d3(d1);
    d2.showdata();
    d3.showdata();

    return 0;
}

/*

classname(classname objectname)
{
    variables
}


void addition(class obj)
{
    int answer=x+y;
    cout<<"answer= "<<answer;
}

int main()
{
    int m=85,n=25;
    addition(object);
    addition(85,26);
}


*/