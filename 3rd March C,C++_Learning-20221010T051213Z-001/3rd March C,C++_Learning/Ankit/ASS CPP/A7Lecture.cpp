#include<iostream>
using namespace std;

class lecture{
    public:
    char lname[20];
    char sname[20];
    char cname[20];
    int lnumber;

    void setdata()
    {
        cout<<"Enter The Name of the Lecture:";
        gets(lname);
        cout<<"Enter The name of the Subject:";
        gets(sname);
        cout<<"Enter the name of the Cource:";
        gets(cname);
        cout<<"Enter The  Number of the Lecture:";
        cin>>lnumber;
    }

    void display()
    {
        cout<<"Name OF the Lecture:";
        puts(lname);
        cout<<"Name of the Subject:";
        puts(sname);
        cout<<"Name of the Cource:";
        puts(cname);
        cout<<"Number of the Lecture:"<<lnumber<<endl;
    }
};

int main()
{
    lecture l1;
    l1.setdata();
    l1.display();
    return 0;
}