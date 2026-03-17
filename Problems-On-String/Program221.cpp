#include<iostream>
using namespace std;

class StrtoggleX
{
    public:
        char *str;
        
        StrtoggleX(char Brr[])
        {
            str = Brr;
        }
        
        void Display()
        {
            int i = 0;
            
            for(i = 0; str[i] != '\0'; i++)
            {
                if(str[i] >= 'A' && str[i] <= 'Z')
                {
                    str[i] = str[i] + 32;
                }
                else
                {
                    str[i] = str[i] - 32;
                }
            }
        }
};

int main()
{
    char Arr[30];
    
    cout<<"Enter String : ";
    cin.getline(Arr,30);
    
    StrtoggleX sobj(Arr);
    sobj.Display();
    cout<<"String After Updation is : "<<Arr<<"\n";

    return 0;
}