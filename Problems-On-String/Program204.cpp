#include<iostream>
using namespace std;

class CountSmall
{
    public:
        char *ptr;
        
        CountSmall(char Brr[])
        {
            ptr = Brr;
        }
        
        int Display()
        {
            int iCount = 0;
            char *temp = ptr;
            
            while(*temp != '\0')
            {
                if((*temp >= 'a') && (*temp <= 'z'))
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
    
    CountSmall cobj(Arr);
    iRet = cobj.Display();
    cout<<"Count Of Small Letter is : "<<iRet<<"\n";
    
    return 0;
}