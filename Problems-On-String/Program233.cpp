#include<iostream>
using namespace std;

class ToUpperX
{
    public:
        char ch;
        
    ToLowerX(char cno)
    {
        ch = cno;
    }
    
    int Display()
    {
        int iNo = 0;
        
        if((ch >= 'a') && (ch <= 'z'))        // Convert Lowercase to Uppercase 
        {
            ch = ch - 32;
        }
        
        if((ch >= 'A') && (ch <= 'Z'))        
        {
            if(ch >= 'A' && ch <= 'C')
            iNo = 2;
            
            else if(ch >= 'D' && ch <= 'F')
            iNo = 3;
            
            else if(ch >= 'G' && ch <= 'I')
            iNo = 4;
            
            else if(ch >= 'J' && ch <= 'L')
            iNo = 5;
            
            else if(ch >= 'M' && ch <= 'O')
            iNo = 6;
            
            else if(ch >= 'P' && ch <= 'S')
            iNo = 7;
            
            else if(ch >= 'T' && ch <= 'V')
            iNo = 8;
            
            else if(ch >= 'W' && ch <= 'Z')
            iNo = 9;
        }
        return iNo;
    }
};

int main()
{
    char cvalue = '\0';
    int iRet = 0;
    
    cout<<"Enter Character : ";
    cin>>cvalue;
    
    ToUpperXX tobj(cvalue);
    
    iRet = tobj.Display();
    
    if(iRet < 1)
    {
        cout<<"Invalid Input!";
    }
    else
    {
        cout<<"Keypad Number is : "<<iRet<<"\n";
    }

    return 0;
}