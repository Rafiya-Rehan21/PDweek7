#include <iostream>
using namespace std;
void amplify(int number);
main()
{
    int number;
    cout << "Enter number of which you want to create a sequence:";
    cin >> number;
    amplify(number);
}
void amplify(int number)
{
    int num=0;
    for(int count =1; count <= number; count++)
    {
        if(count %4 ==0)
        {
            num = count * 10;
            cout << num << " ";
        }
        else
        {
            cout << count << " ";
        }
    }
}