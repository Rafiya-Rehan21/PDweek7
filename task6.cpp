#include <iostream>
using namespace std;
int patientReport(int n);
main()
{
    int n;
    int result;
    result =patientReport(n);

}
int patientReport(int n)
{
    int treated=0;
    int untreated=0;
    int treated1=0;
    float untreated1=0;
    int total_treated1=0;
    int total_treated2=0;
    int total_treated=0;
    int total_untreated=0;
    int total_untreated1=0;
    int total_untreated2=0;
    int sum1=0;
    int sum2=0;
    int sum3=0;
    int sum4 =0;
    int  result;
    int days;
    cout << "Enter number of days:";
    cin >> days;
    for(int count =1; count <=days; count++)
    {
        cout << "Enter number of patients on each day:";
        cin >> n;
        if(count<=2)
        {
            if(n<=7)
            {
                treated=n;
                sum1=treated+sum1;
            }
            if(n>7)
            {
                untreated= n-7;
                total_untreated1=untreated +total_untreated1;
                treated=7;
                sum2=treated+sum2;
            }
            total_treated1= sum1+sum2;
        }
        else
        {
            if(untreated > treated)
            {
                if(n<=8)
                {
                    treated1=n;
                    sum3 =treated1+sum3;
                
                }
                if(n>8)
                {
                    untreated1=n-8;
                    total_untreated2=untreated1 +total_untreated2;
                    treated1=8;
                    sum4 =treated1+sum4;
                }
                total_treated2=sum3 +sum4;
            }
            else
            {
                if(n<=7)
                {
                    sum3=n;
                }
                else
                {
                    untreated1=n-7;
                    total_untreated2=untreated1+total_untreated2;
                    treated1=7;
                    sum4=treated1+sum4;
                }
                total_treated2=sum3+sum4;
            }
        }
        total_treated = total_treated1+total_treated2;
        total_untreated =total_untreated1+ total_untreated2;
    }
    
    cout <<"Total treated patients are:" << total_treated << endl;
    cout << "Total untreated patients are:" << total_untreated << endl;
    return result;
}