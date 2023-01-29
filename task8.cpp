#include <iostream>
using namespace std;
float calculatePercentage(int cargo);
main()
{
    int cargo;
    float result;
    result=calculatePercentage(cargo);
    
}
float calculatePercentage(int cargo)
{
    int n;
    float Mbus=0;
    float truck =0;
    float train =0;
    float sum =0;
    float price =0;
    float avgPrice =0;
    float P1 =0;
    float P2 =0;
    float P3 =0;
    float result =0;
    cout << "Enter count of cargo:";
    cin >> n;
    for(int count=1; count <=n; count++)
    {
        cout << "Enter number of cargo:";
        cin >> cargo;
        sum = sum + cargo;
        if(cargo>=1 && cargo<=3)
        {
            Mbus= Mbus+cargo;
        }
        if(cargo>3 && cargo<=11)
        {
            truck= truck+cargo;
        }
        if(cargo>11)
        {
            train= train+cargo;
        }
    }
    P1 =(Mbus/sum)*100;
    P2 =(truck/sum)*100;
    P3 =(train/sum)*100;
    price =(Mbus *200) + (truck *175) + (train *120);
    avgPrice= price /sum;
    cout << "Average price is:"<< avgPrice << endl;
    cout << "Percentage of cargo by minibus is:"<< P1<< "%" << endl;
    cout << "Percentage of cargo by truck is:"<< P2 << "%" << endl;
    cout << "Percentage of cargo by train is:"<< P3 << "%" << endl;
    return result;
}