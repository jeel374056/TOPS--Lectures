#include<iostream>
using namespace std;
class student
{
    string name;
    int math;
    int scince;
    int computer;
    int total;
    static int id;
    float per;
    public:
    void data()
    {
        cout<<"enter studnt name :";
        cin>>name;
        cout<<"enter math marks :";
        cin>>math;
        cout<<"enter scince marks :";
        cin>>scince;
        cout<<"enter computer marks :";
        cin>>computer;
        total=math+scince+computer;
        per=(float)total/3;
    }
    void details()
    {
        cout<<" student marksheet "<<endl;
        cout<<"id name math science computer total per "<<endl;
    };
    void display()
    {
        id++;
        cout<<id<<" "<<name<<" "<<math<<" "<<scince<<" "<<computer<<" "<<total<<" "<<per<<" "<<endl;
    };
};
int student::id;
int main()
{
    int i;
    student s[5];
    for(i=0;i<=3;i++)
    {
        s[i].data();
    }
    s[i].details();
    for(i=0;i<3;i++)
    {
        s[i].display();
    }
    return 0;
}