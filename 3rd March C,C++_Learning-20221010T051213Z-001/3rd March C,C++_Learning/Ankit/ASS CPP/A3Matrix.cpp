#include <iostream>
using namespace std;

class Add
{
public:
    void sum(int r, int c)
    {
        int m1[r][c], m2[r][c];
        cout << "Enter The Element of 1 Matrix:" << endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> m1[i][j];
            }
        }
        cout << "Enter The Element Of 2nd Matrix" << endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> m2[i][j];
            }
        }
    }
};
int main()
{
    int row, col;
    cout << "Enter the number of rows(should be >1 and <10): ";
    cin >> row;
    cout << "Enter the number of column(should be >1 and <10): ";
    cin >> col;
    Add a1;
    a1.sum(row,col);
    return 0;
}