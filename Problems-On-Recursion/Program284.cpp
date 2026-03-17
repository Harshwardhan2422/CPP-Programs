#include<iostream>
using namespace std;

class CountCaptal 
{
    public:
        char *str;
        
        CountCaptal(char Brr[])
        {
            str = Brr;
        }
        
        int Display()
        {
            int iCount = 0;
            while(*str != '\0')
            {
                if((*str >= 'A') && (*str <= 'Z'))
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
    
    CountCaptal cobj(Arr);
    iRet = cobj.Display();
    
    cout<<"Capital Letters Are : "<<iRet<<"\n";
    
    return 0;
}