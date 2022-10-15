#include<iostream>
using namespace std;

class Bookshop{
    public:
    char name[20];
    char title[20];
    int price;
    char publisher[20];

    void assignvalue()
    {
        cout<<"Name of Author:"<<endl;
        cin>>name;
        cout<<"Name of Title:"<<endl;
        cin>>title;
        cout<<"Name of Price:"<<endl;
        cin>>price;
        cout<<"Name Publisher:"<<endl;
        cin>>publisher;
    }

    void display()
    {
        cout<<"Name of Author:"<<name<<endl;
        cout<<"Name of Title:"<<title<<endl;
        cout<<"Name of Price:"<<price<<endl;
        cout<<"Name of Publisher:"<<publisher<<endl;
    }

};


int main()
{
    Bookshop b1;
    b1.assignvalue();
    b1.display();
    return 0;
}