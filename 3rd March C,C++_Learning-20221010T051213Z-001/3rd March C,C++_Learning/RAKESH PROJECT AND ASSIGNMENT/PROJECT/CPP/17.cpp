#include<iostream>
using namespace std;
class show
{
    int choice;
    public:
    void display()
    {
        cout<<"1 for addition"<<endl;
        cout<<"2 for substraction"<<endl;
        cout<<"enter your choice =";
        cin>>choice;
        switch (choice)
        case 1:
        {
            class base
            {
                int a=10;
                public:
                base(int a)
                {
                    this->a=a;
                }
                base operator+(base b)
                {
                    int temp:
                    temp=a+b.a;
                    return temp;
                }
                void add()
                {
                    cout<<"addition is="<<a<<endl;
                }
            }
        }
    }
};
int main()
{
     show a;
     a.display();
     return 0;
}