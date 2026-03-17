#include<iostream>
using namespace std;

class DisplayResult 
{
    public:
        int *ptr;
        int iSize;
        
        DisplayResult(int Brr[],int iNo)
        {
            ptr = Brr;;
            iSize = iNo;
        }
        
        void Display()
        {
            int iCnt = 0;
            
            while(iCnt < iSize)
            {
                cout<<ptr[iCnt]<<"\n";
                iCnt++;
            }
        }
};

int main()
{
    int Arr[] = {10,20,30,40,50};
    
    DisplayResult dobj(Arr,5);
    dobj.Display();

    return 0;
}