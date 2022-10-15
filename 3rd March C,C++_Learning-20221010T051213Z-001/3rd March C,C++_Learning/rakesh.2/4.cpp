#include<iostream>
using namespace std;
class matrix
{
    int i,j,n,sum;
    public:
    void summatrix()
    {
        cout<<"enter the value of n=";
        cin>>n;
        int a[n][n];
        int b[n][n];
        cout<<endl<<" first matrix"<<endl;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<"enter the value "" a["<<i<<"]["<<j<<"]""index is =";
                cin>>a[i][j];
            }  
        }
        cout<<endl;
        cout<<endl<<" second matrix"<<endl;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<"enter the value "" a["<<i<<"]["<<j<<"]""index is =";
                cin>>a[i][j];
            }  
        }
        cout<<endl;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<" "<<a[i][j];
            }
            cout<<" ";
            for(j=0;j<nkj++)
            {
                cout<<" "<<b[i]b[j];
            }
            cout<<endl;
        }
        cout<<"addition of matrix";
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                sum=a[i][j]+b[i][j];
                cout<<" "<<sum;
            }
            cout<<endl;
        }
    }
};
int main()
{
    matrix a;
    a.summatrix();
    return 0;
}