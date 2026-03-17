#include<iostream>
using namespace std;

class CountSmall
{
    public:
        char *str;
        
        CountSmall(char Brr[])
        {
            str = Brr;
        }
        
        int Display()
        {
            int iCount = 0;
            
            while(*str != '\0')
            {
                if((*str >= 'a') && (*str <= 'z'))
                {
                    iCount++;
                }
                str++;
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
    
    CountSmall cobj(Arr);
    iRet = cobj.Display();
    
    cout<<"Small Letters Are : "<<iRet<<"\n";
    
    return 0;
}