#include<iostream>
using namespace std;

class CountDigit
{
    public:
        char *ptr;
        
        CountDigit(char Brr[])
        {
            ptr = Brr;
        }
        
        int Display()
        {
            int iCount = 0;
            char * temp = ptr;
            
            while(*temp != '\0')
            {
                if((*temp >= '0') && (*temp <= '9'))
                {
                    iCount++;
                }
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
    cin.ignore();
    
    CountDigit cobj(Arr);
    
    iRet = cobj.Display();
    cout<<"Count Of Digits Are : "<<iRet<<"\n";
    
    return 0;
}