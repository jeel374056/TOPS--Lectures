#include<iostream>
using namespace std;
class base
{
    protected:
    string teamname;
    string playername;
    int fl;
    int sl;
    int tl;
    int toal;
    float average;
    public:
    void setinformation()
    {
        cout<<"enter team name :";
        cin>>teamname;
        cout<<"enter player name :";
        cin>>playername;
        cout<<"enter first innings score :";
        cin>>fl;
        cout<<"enter second innings score :";
        cin>>sl;
        cout<<"enter third innings score :";
        cin>>tl;
        total=fl+sl+tl;
        average=(float)total/3;
    }
};
class derived:public base
{
    public:
    void display()
    {
        cout<<"player information"<<endl;
        cout<<"team name is :"<<teamname<<endl;
        cout<<"player name is :"<<playername<<endl;
        cout<<"first inning score :"<<fl<<endl;
        cout<<"second inning score is :"<<sl<<endl;
        cout<<"third inning score is :"<<tl<<endl;
        cout<<"total run is :"<<total<<endl;
        cout<<"average score is :"<<average<<endl;
        if(fl>sl)
        {
            if(fl>tl)
            {
                cout<<"highest score is :"<<fl<<endl;
            }
            else
            {
                cout<<"highest score is :"<<tl<<endl;
            }
        }
        else
        {
            if(sl>tl)
            {
                cout<<"highest score is :"<<sl<<endl;
            }
            else
            {
                cout<<"highest score is :"<<tl<<endl;
            }
        }
    }
};
int main()
{
    derived a;
    a.setinformation();
    a.display();
    return 0;
}