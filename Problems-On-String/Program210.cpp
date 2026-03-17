#include<iostream>
using namespace std;

class CountSpace
{
    public:
        char *ptr;
        
        CountSpace(char Brr[])
        {
            ptr = Brr;
        }
        
        int Display()
        {
            int iCount = 0;
            char *temp = ptr;
            
            while(*temp != '\0')
            {
                if(*temp == ' ')
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
    
    CountSpace cobj(Arr);
    
    iRet = cobj.Display();
    cout<<"Count Of Space is  : "<<iRet<<"\n";
    
    return 0;
}