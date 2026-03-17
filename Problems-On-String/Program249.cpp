#include<iostream>
using namespace std;

class CountWordSpace 
{
    public:
        char *str;
        
        CountWordSpace(char Brr[])
        {
            str = Brr;
        }
        
        void Display()
        {
            int iWord = 0 , iSpace = 0,iSpecial = 0;
            int i = 0;
            
            while(str[i] != '\0')
            {
                
                if((str[i] >= 'a') && (str[i] <= 'z'))
                {
                    str[i] = str[i] - 32;
                }
                
                if(str[i] == ' ')
                    {
                        iSpace++;
                    }
                    
                else if((str[i] >= 'A') && (str[i] <= 'Z'))
                {
                    if(i == 0 || str[i - 1] == ' ')
                    {
                        iWord++;
                    }
                }
                else
                {
                    iSpecial++;
                }
                
                i++;
            }
            cout<<"Word : "<<iWord<<"\n";
            cout<<"Space : "<<iSpace<<"\n";
            cout<<"Special : "<<iSpecial<<"\n";
        }
};

int main()
{
    char Arr[50];
    
    cout<<"Enter String : \n";
    cin.getline(Arr,50);
    
    CountWordSpace cobj(Arr);
    cobj.Display();

    return 0;
}