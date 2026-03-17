#include<iostream>
using namespace std;

class StrlenX
{
    public:
        char *ptr;
        
        StrlenX(char Brr[])
        {
            ptr = Brr;
        }
        
        int Display()
        {
            int iCount = 0;
            char *temp = ptr;
            
            while(*temp != '\0')
            {
                iCount++;
                temp++;
            }
            return iCount;
        }
};

int main()
{
    char Arr[30];
    int iRet = 0;
    
    cout<<"Enter String : \n";
    cin.get(Arr,30);
    
    StrlenX sobj(Arr);
    iRet = sobj.Display();
    
    cout<<"Length of String is : "<<iRet<<"\n";
    
    return 0;
}