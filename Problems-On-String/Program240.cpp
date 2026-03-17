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
        
        long long int Display()
        {
            int i = 0;
            long long int j = 0;        // Use 64 bit
            
            while(str[i] != '\0')
            {
                long long int iNo = 0;
                
                if((str[i] >= 'a') && (str[i] <= 'z'))
                {
                    // Convert Lowercase to Uppercase 
                    str[i] = str[i] - 32;        
                }
                
                if((str[i] >= 'A') && (str[i] <= 'Z'))
                {
                    if(str[i] <= 'C')
                    j = j * 10 + 2;
                    
                    else if(str[i] <= 'F')
                    j = j * 10 + 3;
                    
                    else if(str[i] <= 'I')
                    j = j * 10 + 4;
                    
                    else if(str[i] <= 'L')
                    j = j * 10 + 5;
                    
                    else if(str[i] <= 'O')
                    j = j * 10 + 6;
                    
                    else if(str[i] <= 'S')
                    j = j * 10 + 7;
                    
                    else if(str[i] <= 'V')
                    j = j * 10 + 8;
                    
                    else if(str[i] <= 'Z')
                    j = j * 10 + 9;
                }
                i++;
            }
            return j;
        }
};

int main()
{
    char Arr[30];
    long long int iRet = 0;
    
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
        // printf 64 bit number 
        cout<<"Keypad Sequence is : "<<iRet<<"\n";
    }

    return 0;
}