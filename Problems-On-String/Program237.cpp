#include<iostream>
using namespace std;

class WordToKeypad 
{
    public:
        char *str;
        
        WordToKeypad(char Brr[])
        {
            str = Brr;
        }
        
        int Display()
        {
            int i = 0, j = 0;
            
            while(str[i] != '\0')
            {
                int iNo = 0;
                
                if((str[i] >= 'A') && (str[i] <= 'Z'))
                {
                    // Convert UpperCase To Lowercase 
                    str[i] = str[i] + 32;        
                }
                
                if((str[i] >= 'a') && (str[i] <= 'z'))
                {
                    if(str[i] >= 'a' && str[i] <= 'c')
                    iNo = 2;
                    
                    else if(str[i] >= 'd' && str[i] <= 'f')
                    iNo = 3;
                    
                    else if(str[i] >= 'g' && str[i] <= 'i')
                    iNo = 4;
                    
                    else if(str[i] >= 'j' && str[i] <= 'l')
                    iNo = 5;
                    
                    else if(str[i] >= 'm' && str[i] <= 'o')
                    iNo = 6;
                    
                    else if(str[i] >= 'p' && str[i] <= 's')
                    iNo = 7;
                    
                    else if(str[i] >= 't' && str[i] <= 'v')
                    iNo = 8;
                    
                    else if(str[i] >= 'w' && str[i] <= 'z')
                    iNo = 9;
                    
                    j = j * 10 + iNo;
                }
                i++;
            }
            return j;
        }
};

int main()
{
    char Arr[30];
    int iRet = 0;
    
    cout<<"Enter Word : ";
    cin>>Arr;
    
    WordToKeypad obj(Arr);
    
    iRet = obj.Display();
    
    if(iRet < 1)
    {
        cout<<"Invalid Input! \n";
    }
    else
    {
        cout<<"Keypad Sequence is : "<<iRet<<"\n";
    }

    return 0;
}