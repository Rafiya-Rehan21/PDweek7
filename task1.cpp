#include <iostream>
using namespace std;
void printStar(int rows);
main()
{
    int rows;
    cout << "Enter number of rows:";
    cin >> rows;
    printStar(rows);

}
void printStar(int rows)
{
    for(int i = 1; i <= rows; i++)
    {
        for(int j=1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}