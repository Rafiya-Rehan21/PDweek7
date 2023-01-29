#include <iostream>
using namespace std;
void printTriangle(int rows);
main()
{
    int rows;
    cout << "Enter number of rows:";
    cin >> rows;
    printTriangle(rows);
    
}
void printTriangle(int rows)
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
