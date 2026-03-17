#include<iostream>
using namespace std;

void Display(int ptr[])
{
    cout<<"Values from Array Are : \n";
    cout<<ptr[0]<<"\n";        // *(ptr + 0)
    cout<<ptr[1]<<"\n";        // *(ptr + 1)
    cout<<ptr[2]<<"\n";        // *(ptr + 2)
    cout<<ptr[3]<<"\n";        // *(ptr + 3)
}

int main()
{
    int Arr[4];
    int iCnt = 0;
    
    cout<<"Entered the Values : \n";
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        cin>>Arr[iCnt];
    }
    
    Display(Arr);
    
    return 0;
}