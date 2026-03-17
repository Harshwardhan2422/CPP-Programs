#include<iostream>
using namespace std;

class ToLowerX
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
        
        if((ch >= 'a') && (ch <= 'z'))        // For LowerCase 
        {
            if(ch >= 'a' && ch <= 'c')
            iNo = 2;
            
            else if(ch >= 'd' && ch <= 'f')
            iNo = 3;
            
            else if(ch >= 'g' && ch <= 'i')
            iNo = 4;
            
            else if(ch >= 'j' && ch <= 'l')
            iNo = 5;
            
            else if(ch >= 'm' && ch <= 'o')
            iNo = 6;
            
            else if(ch >= 'p' && ch <= 's')
            iNo = 7;
            
            else if(ch >= 't' && ch <= 'v')
            iNo = 8;
            
            else if(ch >= 'w' && ch <= 'z')
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
    
    ToLowerX tobj(cvalue);
    
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