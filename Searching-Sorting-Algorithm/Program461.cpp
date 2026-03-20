#include<iostream>
using namespace std;

class BubbleSort
{
    public:
        int isize;
        int *ptr;
        
        BubbleSort(int x)
        {
            isize = x;
            ptr = new int[isize];
        }
        
        ~BubbleSort()
        {
            delete []ptr;
        }
        
        void Accept()
        {
            int i = 0;
            cout<<"Enter The Values \n";
            
            for(i = 0; i < isize; i++)
            {
                cin>>ptr[i];
            }
        }
        
        void Sort()        
        {
            int i = 0, j = 0, temp = 0, k = 0;
            
            for(i = 0; i < isize; i++)
            {
                for(j = 0; j < isize - i - 1; j++)
                {
                    if(ptr[j] > ptr[j + 1])
                    {
                        temp = ptr[j];
                        ptr[j] = ptr[j + 1];
                        ptr[j + 1] = temp;
                    }
                }
                
                cout<<"Data After Pass "<<i<<": ";
                
                for(k = 0; k < isize; k++)
                {
                    cout<<ptr[k]<<" ";
                }
                cout<<"\n";
            }
        }
        
        void Display()
        {
            int i = 0;
            cout<<"Values Of Array After Sorting : \n";
            
            for(i = 0; i < isize; i++)
            {
                cout<<ptr[i]<<"\n";
            }
        }
};

int main()
{
    int ivalue = 0;
    bool bRet = false;
    
    cout<<"Enter The Size of Array : ";
    cin>>ivalue;
    
    BubbleSort bobj(ivalue);
    
    bobj.Accept();
    bobj.Sort();
    bobj.Display();

    return 0;
}