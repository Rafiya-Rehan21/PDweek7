#include <iostream>
using namespace std;
float calculatePercentage(int number);
main()
{
    int number;
    float result;
    result=calculatePercentage(number);
}
float calculatePercentage(int number)
{
    int n;
    float P1 =0;
    float P2 =0;
    float P3 =0;
    float percent1 =0;
    float percent2 =0;
    float percent3 =0;
    float result =0;
    cout << "Enter any number:";
    cin >> n;
    for(int count =1; count <=n; count++)
    {
        cout << "Enter number:";
        cin >> number;
        if(number%2==0)
        {
            P1= P1+1;
        }
        if(number%3==0)
        {
            P2= P2+1;
        }
        if(number%4==0)
        {
            P3= P3+1;
        }
    }
    percent1 = (P1/n) *100;
    percent2 = (P2/n) *100;
    percent3 = (P3/n) *100;
    cout << "Percent1:" << percent1 << "%" << endl;
    cout << "Percent2:" << percent2 << "%" << endl;
    cout << "Percent3:" << percent3 << "%" << endl;
    return result;
}