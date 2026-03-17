#include<iostream>
using namespace std;

int main()
{
    int iStandard = 0;
    
    cout<<"Enter Your Standard : \n";
    cin>>iStandard;
    
    switch(iStandard)
    {
        case 8:
            cout<<"Your Exam At 8am \n";
            break;
            
        case 9:
            cout<<"Your Exam At 9am \n";
            break;
            
        case 10:
            cout<<"Your Exam At 10am \n";
            break;
            
        case 11:
            cout<<"Your Exam At 11am \n";
            break;
            
        case 12:
            cout<<"Your Exam At 12pm \n";
            break;
        
        default:
            cout<<"Sorry! we don't have information about your Standard. \n";        
    }
    return 0;
}