#include<iostream>
using namespace std;
class matrix
{
    int i,j,n;
    public:
    void matrix1()
    {
        cout<<"enter the value of n=";
        cin>>n;
        int a[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<"enter the value "" a["<<i<<"]["<<j<<"]""index is =";
                cin>>a[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<" "<<a[i][j];
            }
            cout<<endl;
        }
    }
};
int main()
{
    matrix m;
    m.matrix1();
    return 0;
}