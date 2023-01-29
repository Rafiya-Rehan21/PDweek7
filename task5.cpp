#include <iostream>
using namespace std;
int triangle(int number);
main()
{
    int number;
    int dots;
    cout << "Enter number of triangle:";
    cin >> number;
    dots = triangle(number);
    cout << "The number of dots in triangle is:"<< dots << endl;
}
int triangle(int number)
{
    int dots =0;
    for(int count = 1; count <= number; count++)
    {
        dots =dots + count;
    }
    return dots;
}