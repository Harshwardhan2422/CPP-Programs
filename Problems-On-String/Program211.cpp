#include<iostream>
using namespace std;

void Display(char str[])
{
    int i = 0;
    cout<<"Entered String is : \n";
    
    for(i = 0;str[i] != '\0'; i++)
    {
        cout<<str[i]<<"\n";
    }
}
int main()
{
    char Arr[30];
    
    cout<<"Enter String : ";
    cin.getline(Arr,30);
    
    Display(Arr);

    return 0;
}