#include<iostream>
using namespace std;
class library
{
    string shopname;
    string bookname;
    int page;
    string authorname;
    string publishername;
    int year;
    float price;
    public:
    void getbook()
    {
        cout<<"enter shop name :";
        cin>>shopname;

        cout<<"enter bookname :";
        cin>>bookname;

        cout<<"enter book author name :";
        cin>>authorname;

        cout<<"enter book pubisher name :";
        cin>>publishername;

        cout<<"enter publication year :";
        cin>>year;

        cout<<"enter book price :";
        cin>>price;
    }
    void disp_book()
    {
        cout<<"book details";
        cout<<"shop name :"<<shopname<<endl;
        cout<<"book name :"<<bookname<<endl;
        cout<<"pages in book :"<<page<<endl;
        cout<<"author name :"<<authorname<<endl;
        cout<<"publisher name :"<<publishername<<endl;
        cout<<"publication year :"<<year<<endl;
        cout<<"book price :"<<price<<endl;
    }
};
int main()
{
    library l;
    l.getbook();
    l.disp_book();
    return 0;
}