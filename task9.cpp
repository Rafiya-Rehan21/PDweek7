#include <iostream>
using namespace std;
void leftTriangle(int rows);
void rightTriangle(int rows);
main()
{
    int rows;
    cout << "Enter number of rows:";
    cin >> rows;
    leftTriangle(rows);
    
}
void leftTriangle(int rows)
{
    for(int i= 1; i<=rows; i++)
    {
        for(int j =1; j<=i; j++)
        {
            cout << "*";
        }
        for(int space=rows; space>=i; space--)
        { 
        cout << " ";
        }
        for(int space=rows; space>=i; space--)
        { 
        cout << " ";
        } 
        for(int j= 1; j<=i; j++)
        {
        cout << "*";
        }
        
    cout << endl;
   }
}
