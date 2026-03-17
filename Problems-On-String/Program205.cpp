#include<iostream>
using namespace std;

class CountCapital
{
    public:
        char *ptr;
        
        CountCapital(char Brr[])
        {
            ptr = Brr;
        }
        
        int Display()
        {
            int iCount = 0;
            char *temp = ptr;
            
            while(*temp != '\0')
            {
                if((*temp >= 65) && (*temp <= 90))
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
    
    CountCapital cobj(Arr);
    iRet = cobj.Display();
    cout<<"Count Of Capital Letter is : "<<iRet<<"\n";
    
    return 0;
}