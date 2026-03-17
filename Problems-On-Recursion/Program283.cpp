#include<iostream>
using namespace std;

class StrlenX
{
    public:
        char *str;
        
        StrlenX(char Brr[])
        {
            str = Brr;
        }
        
        int Display()
        {
            static int iCount = 0;
            
            if(*str != '\0')
            {
                iCount++;
                str++;
                Display();
            }
            return iCount;
        }
};

int main()
{
    char Arr[30];
    int iRet = 0;
    
    cout<<"Enter String : \n";
    cin.getline(Arr,30);
    
    StrlenX sobj(Arr);
    iRet = sobj.Display();
    cout<<"String Length Is : "<<iRet<<"\n";
    
    return 0;
}