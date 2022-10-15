#include<iostream>
using namespace std;
const float pi=3.14;

int area(int,int);
float area(float);
float area(float,float);

int main()
{
    int l,b;
    float r,bs,ht;
    cout<<"Enter The Lenght and bredth of recatangle:";
    cin>>l>>b;
    cout<<"Enter The Raidus of Circle:";
    cin>>r;
    cout<<"Enter base and height of triangle:";
    cin>>bs>>ht;
    cout<<"Area of Recatangle is"<<area(l,b);
    cout<<"\nArea of Circle is"<<area(r);
    cout<<"\nArea of Traingle is"<<area(bs,ht);
}
int area(int l,int b)
{
    return(l*b);
}
float area(float r)
{
    return(pi*r*r);
}
float area (float bs,float ht){
    {
   return((bs*ht)/2);
}
}
  
