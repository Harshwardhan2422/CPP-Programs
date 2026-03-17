// Input: Aa Bb
// Output: 4

#include<iostream>
using namespace std;

int Count(char str[])
{
    int i = 0, iCount = 0;
    
    for(i = 0; str[i] != '\0'; i++)
    {
        if((str[i] == 'A') || (str[i] == 'a')||
          (str[i] == 'B') || (str[i] == 'b'))
          {
              iCount++;
          }
    }
    return iCount;
}

int main()
{
    char Arr[30];
    int iRet = 0;
    
    cout<<"Enter String : ";
    cin.getline(Arr,30);
    
    iRet = Count(Arr);
    cout<<"Number is : "<<iRet<<"\n";

    return 0;
}