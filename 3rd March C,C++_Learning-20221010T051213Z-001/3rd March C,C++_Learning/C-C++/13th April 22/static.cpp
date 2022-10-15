#include<iostream>
using namespace std;

class Shop{
    static char id;
    string name;
    public:
    void setData(string s){
        name =s;
    }
    void display(){
        cout<<id<<endl;
        id++;
        cout<<name<<endl;
    }
};

char Shop::id='A';

int main()
{
    Shop s1,s2;
    s1.setData("toys");
    s1.display();
    s2.setData("toys");
    s2.display();
return 0;
}