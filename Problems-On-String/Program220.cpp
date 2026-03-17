#include<iostream>
using namespace std;

void strupX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;        // Convert lowe case to Upper 
        }
        str++;
    }
}

int main()
{
    char Arr[30];
    
    cout<<"Enter String : ";
    cin.getline(Arr,30);
    
    strupX(Arr);
    
    cout<<"String After Updation : "<<Arr<<"\n";
    
    return 0;
}