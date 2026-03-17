#include<iostream>
using namespace std;

void DisplayResult(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        cout<<"\nIndia\tIs\tMy\tCountry\n";    // Using \t
    }
}

int main()
{
    int iFrequency = 0;
    
    cout<<"Enter The Frequency : \n";
    cin>>iFrequency;
    
    DisplayResult(iFrequency);
    
    return 0;
}