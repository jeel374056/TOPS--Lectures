#include<iostream>
using namespace std;
class lecture
{
    string name;
    string subname;
    string coursename;
    int lecturenumber;
    int i;
    public:
    void setdata();
    void display();
};
void lecture::setdata()
{
    cout<<"enter lecture name :";
    cin>>name;

    cout<<"enter subject :";
    cin>>subname;

    cout<<"enter coursename :";
    cin>>coursename;

    cout<<"enter number of lecture :";
    cin>>lecturenumber;
}
void lecture::display()
{
    cout<<"lecture name :"<<name<<endl;
    cout<<"subject name :"<<subname<<endl;
    cout<<"course name :"<<coursename<<endl;
    cout<<"enter number of lecture :"<<lecturenumber<<endl;
}
int main()
{
    int i;
    lecture l[10];
    for(i=0;i<5;i++)
    {
        l[i].setdata();
        {
            cout<<"next lecture"<<endl;
        }
    }
    cout<<"lecture and subject details"<<endl;
    for(i=0;i<5;i++)
    {
        l[i].display();
        {
            cout<<"--------------"<<endl;
        }
    }
    return 0;
}