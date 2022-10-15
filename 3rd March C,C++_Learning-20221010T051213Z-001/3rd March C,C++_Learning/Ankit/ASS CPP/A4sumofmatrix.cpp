#include <iostream>
using namespace std;

class Add
{
public:
    void sum(int r, int c)
    {
        int m1[r][c], m2[r][c], s[r][c];
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
        cout << "Output: ";
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                s[i][j] = m1[i][j] + m2[i][j];
                cout << s[i][j] << " ";
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
    Add obj;
    obj.sum(row, col);
    return 0;
}