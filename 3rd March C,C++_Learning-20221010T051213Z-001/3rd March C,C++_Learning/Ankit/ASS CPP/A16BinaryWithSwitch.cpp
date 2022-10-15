#include <iostream>
using namespace std;

class demo
{
    float a, b;

public:
    void
    getdata();
    void
    display();
    demo
    operator+(demo);
    demo
    operator-(demo);
    demo
    operator*(demo);
    demo
    operator/(demo);
    int
    operator==(demo);
};

void demo::getdata()
{
    cout <<"Enter values of a and b :";
    cin >> a >> b;
}

void demo::display()
{
    cout <<"a ="<< a <<" tb ="<< b;
}

demo demo::operator+(demo d1)
{
    demo
        d2;
    d2.a = a + d1.a;
    d2.b = b + d1.b;
    return d2;
}

demo demo::operator-(demo d1)
{
    demo d2;
    d2.a = a - d1.a;
    d2.b = b - d1.b;
    return d2;
}

demo demo::operator*(demo d1)
{
    demo
        d2;
    d2.a = a * d1.a;
    d2.b = b * d1.b;
    return d2;
}

demo demo::operator/(demo d1)
{
    demo
        d2;
    d2.a = a / d1.a;
    d2.b = b / d1.b;
    return d2;
}

int demo::operator==(demo d1)
{
    if ((a == d1.a) && (b == d1.b))
        return 1;
    else
        return 0;
}

int main()
{
    int ch;
    demo
        d1,
        d2, d3;

    cout <<"First Object : ";
    d1.getdata();
    cout <<"\n Second Object : ";
    d2.getdata();

    cout <<"\nOperator Overloadig Menu";
    cout <<"\n1.Additionn\n2.Subtractionn\n3.Multiplicationn\n4.Divisionn\n5.Comparisonn\n6.Exit";
    cout <<"\nEnter your choice(1 - 6):";
    cin >> ch;

    switch (ch)
    {
    case 1:
        d3 = d1 + d2;
        cout <<"\nThird Object : ";
        d3.display();
        break;

    case 2:
        d3 = d1 - d2;
        cout <<"\nThird Object : ";
        d3.display();
        break;

    case 3:
        d3 = d1 * d2;
        cout <<"\nThird Object : ";
        d3.display();
        break;

    case 4:
        d3 = d1 / d2;
        cout <<"\nThird Object : ";
        d3.display();
        break;

    case 5:
        if (d1 == d2)
            cout <<"\nObjects are Equal";
        else
            cout <<"\nObjects are Not Equal";
        break;

    case 6:
        exit(0);
        break;

    default:
        cout <<"Wrong Choice !!!Press any key to exit";
    }
    return 0;
}