#include<iostream>
using namespace std;

void strlwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;    // Convert Upper Case to Lower 
        }
        str++;
    }
}

int main()
{
    char Arr[30];
    
    cout<<"Enter String : ";
    cin.getline(Arr,30);
    
    strlwrX(Arr);
    
    cout<<"String After Updation : "<<Arr<<"\n";
    
    return 0;
}