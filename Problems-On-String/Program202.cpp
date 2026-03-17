#include<iostream>
using namespace std;

class Count
{
    public:
        char *ptr;
        
        Count(char Brr[])
        {
            ptr = Brr;
        }
        
        int Display()
        {
            int iCount = 0;
            char *temp = ptr;
            
            while(*temp != '\0')
            {
                if(*temp == 'a')
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
    
    Count cobj(Arr);
    iRet = cobj.Display();
    
    cout<<"Count of a is : "<<iRet<<"\n";
    
    return 0;
}