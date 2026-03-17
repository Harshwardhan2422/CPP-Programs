#include<iostream>
using namespace std;

class DisplayString 
{
    public:
        char *ptr;
        
        DisplayString(char Brr[])
        {
            ptr = Brr;
        }
        
        void Display()
        {
            while(*ptr != '\0')
            {
                cout<<*ptr<<"\n";
                ptr++;
            }
        }
};

int main()
{
    char Arr[30];
    
    cout<<"Enter String : ";
    cin.get(Arr,30);
    
    DisplayString dobj(Arr);
    dobj.Display();
     
    return 0;
}