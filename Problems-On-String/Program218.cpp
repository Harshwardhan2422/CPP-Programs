#include<iostream>
using namespace std;

void Update(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'm')
        {
            *str = 'h';
        }
        str++;
    }
}

int main()
{
    char Arr[30];
    
    cout<<"Enter String : ";
    cin.getline(Arr,30);
    
    Update(Arr);
    
    cout<<"String After Updation : "<<Arr<<"\n";
    
    return 0;
}