#include<iostream>
using namespace std;

class Count
{
    public:
        char ch;
        
        Count(char cNo)
        {
            ch = cNo;
        }
        
        int Display()
        {
            int iCount = 0;
            
            if(ch >= 'A' && ch <= 'Z')        // UpperCase 
            {
                iCount = ch - 'A' + 1;
            }
            return iCount;
        }

};

int main()
{
    char cvalue = '\0';
    int iRet = 0;
    
    cout<<"Enter Character : ";
    cin>>cvalue;
    
    Count cobj(cvalue);
    iRet = cobj.Display();
    
    if(iRet == 0)
    {
        cout<<"Invalid Input! Enter An Alphabet \n";
    }
    else
    {
        cout<<"Alphabet Position of "<<cvalue<<" Is : "<<iRet<<"\n";
    }

    return 0;
}