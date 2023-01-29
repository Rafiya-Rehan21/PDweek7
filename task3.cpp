#include <iostream>
using namespace std;
void upperStar(int rows);
void lowerStar(int rows);
main()
{
    int rows;
    cout << "Enter number of rows:";
    cin >> rows;
    upperStar(rows);
    lowerStar(rows);
}
void upperStar(int rows)
{
    for(int i = 1; i <= rows; i ++)
    {
        for(int space = rows; space>=i; space--)
        {
            cout << " ";
        }
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void lowerStar(int rows)
{
    for(int i = rows; i >= 1; i --)
    {
        for(int space = i; space <=rows; space ++)
        {
            cout << " ";
        }
        for(int j = i; j >=1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
