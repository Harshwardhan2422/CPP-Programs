#include<iostream>
using namespace std;

class ReverseString 
{
    public:
        char *str;
        
        ReverseString(char Brr[])
        {
            str = Brr;
        }
        
        void Display()
        {
            int iStart = 0, iEnd = 0;
            char temp = '\0';
            
            while(str[iEnd] != '\0')
            {
                iEnd++;
            }
            iEnd--;
            
            while(iStart < iEnd)
            {
                temp = str[iStart];
                str[iStart] = str[iEnd];
                str[iEnd] = temp;
                
                iStart++;
                iEnd--;
            }
        }
};

int main()
{
    char Arr[30];
    
    cout<<"Enter String : \n";
    cin>>Arr;
    
    ReverseString obj(Arr);
    obj.Display();
    
    cout<<"Reverse String Is : "<<Arr<<"\n";
    
    return 0;
}