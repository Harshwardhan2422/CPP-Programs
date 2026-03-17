#include<iostream>
using namespace std;

class CountCharTypes 
{
    public:
        char *str;
        
        CountCharTypes(char Brr[])
        {
            str = Brr;
        }
        
        void Display()
        {
            int iUpper = 0, iLower = 0, iDigit = 0, iOther = 0;
            int i = 0;
            
            while(str[i] != '\0')
            {
                if((str[i] >= 'a') && (str[i] <= 'z'))
                {
                    iLower++;
                }
            
                else if((str[i]>= 'A') && (str[i] <= 'Z'))
                {
                    iUpper++;
                }
            
                else if((str[i] >= '0') && (str[i] <= '9'))
                {
                    iDigit++;
                }
                else
                {
                    iOther++;
                }
                i++;
            }
            cout<<"UpperCase Is : "<<iUpper<<"\n";
            cout<<"Lowercase Is : "<<iLower<<"\n";
            cout<<"Digits Is : "<<iDigit<<"\n";
            cout<<"Others Is : "<<iOther<<"\n";
        }
};

int main()
{
    char Arr[100];
    
    cout<<"Enter String : ";
    cin>>Arr;
    
    CountCharTypes cobj(Arr);
    cobj.Display();
    
    return 0;
}