#include<iostream>
using namespace std;

void DisplayResult(int iStandard)
{
    if(iStandard < 0)
    {
        iStandard = - iStandard;        //  Updator 
    }
    
    switch(iStandard)
    {
        case 8:
        case 9:
            cout<<"Your Exam At 9am \n";
            break;
            
        case 10:
        case 11:
            cout<<"Your Exam At 11am \n";
            break;
            
        case 12:
            cout<<"Your Exam At 1pm \n";
            break;
            
        default:
            cout<<"Sorry! We don't have information about your Standard \n";         
    }
}

int main()
{
    int iValue= 0;
    
    cout<<"Enter Your Standard : \n";
    cin>>iValue;
    
    DisplayResult(iValue);
    
    
    return 0;
}