#include<iostream>
using namespace std;

class CharCount 
{
    public:
        int iUpper;
        int iLower;
        int iDigit;
        int iOther;
    
    CharCount()
    {
        iUpper = 0;
        iLower = 0;
        iDigit = 0;
        iOther = 0;
    }
};

class CountCharTypes 
{
    public:
        char *str;
        
        CountCharTypes(char Brr[])
        {
            str = Brr;
        }
        
        CharCount Display()
        {
            int i = 0;
            
            CharCount obj;
            
            while(str[i] != '\0')
            {
                if((str[i] >= 'a') && (str[i] <= 'z'))
                {
                    obj.iLower++;
                }
                
                else if((str[i] >= 'A') && (str[i] <= 'Z'))
                {
                    obj.iUpper++;
                }
                else if((str[i] >= '0') && (str[i] <= '9'))
                {
                    obj.iDigit++;
                }
                else
                {
                    obj.iOther++;
                }
                i++;
            }
            return obj;
        }
};

int main()
{
    char Arr[30];
    
    cout<<"Enter String : ";
    cin>>Arr;

    CountCharTypes cobj(Arr);
    CharCount cobjX = cobj.Display();
    
    cout<<"UpperCase Letters : "<<cobjX.iUpper<<"\n";
    cout<<"Lowercase Letters : "<<cobjX.iLower<<"\n";
    cout<<"Digits Are : "<<cobjX.iDigit<<"\n";
    cout<<"Other Characters Are : "<<cobjX.iOther<<"\n";

    return 0;
}