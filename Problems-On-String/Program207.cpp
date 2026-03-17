#include<iostream>
using namespace std;

class CountVowel
{
    public:
        char *ptr;
        
        CountVowel(char Brr[])
        {
            ptr = Brr;
        }
        
        int Display()
        {
            int iCount = 0;
            char *temp = ptr;
            
            while(*temp != '\0')
            {
                if((*temp == 'A')||
                   (*temp == 'E')||
                   (*temp == 'I')||
                   (*temp == 'O')||
                   (*temp == 'U'))
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
    
    CountVowel cobj(Arr);
    iRet = cobj.Display();
    cout<<"Count Of Vowels is : "<<iRet<<"\n";
    
    return 0;
}