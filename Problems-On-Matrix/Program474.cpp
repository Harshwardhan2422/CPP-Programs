#include<iostream>
using namespace std;

class Matrix
{
    public:
    
        int **ptr;
        int iRow, iCol;
    
        Matrix(int iNo1, int iNo2)
        {
            int i = 0;
        
            iRow = iNo1;
            iCol = iNo2;
        
            ptr = new int*[iRow];
        
            for(i = 0; i < iRow; i++)
            {
                ptr[i] = new int[iCol];
            }
        }
    
        ~Matrix()
        {
            for(int i = 0; i < iRow; i++)
            {
                delete []ptr[i];
            }
            delete []ptr;
        }
    
        void Accept()
        {
            int i = 0, j = 0;
        
            cout<<"Please Enter The Values : \n";
        
            for(i = 0; i < iRow; i++)
            {
                for(j = 0; j < iCol; j++)
                {
                    cin>>ptr[i][j];
                }
            }
        }
    
        void Display()
        {
            int i = 0, j = 0;
        
            cout<<"Elements of Matrix Are : \n";
        
            for(i = 0; i < iRow; i++)
            {
                for(j = 0; j < iCol; j++)
                {
                    cout<<ptr[i][j]<<"\t";
                }
                cout<<"\n";
            }
        }
        
        int Summation()
        {
            int i = 0, j = 0, iSum = 0;
            
            for(i = 0; i < iRow; i++)
            {
                for(j = 0; j < iCol; j++)
                {
                    iSum = iSum + ptr[i][j];
                }
            }
            return iSum;
        }
        
        int CountEven()
        {
            int i = 0, j = 0, iCount = 0;
            
            for(i = 0; i < iRow; i++)
            {
                for(j = 0; j < iCol; j++)
                {
                    if(ptr[i][j] % 2 == 0)
                    {
                        iCount++;
                    }
                }
            }
            return iCount;
        }
        
        int SumEven()
        {
            int i = 0, j = 0, iSum = 0;
            
            for(i = 0; i < iRow; i++)
            {
                for(j = 0; j < iCol; j++)
                {
                    if(ptr[i][j] % 2 == 0)
                    {
                        iSum = iSum + ptr[i][j];
                    }
                }
            }
            return iSum;
        }
};

int main()
{
    int ivalue1 = 0, ivalue2 = 0, iRet = 0;
    
    cout<<"Enter Number Of Rows : \n";
    cin>>ivalue1;
    
    cout<<"Enter Number Of Columns : \n";
    cin>>ivalue2;

    Matrix mobj(ivalue1, ivalue2);
    
    mobj.Accept();
    mobj.Display();
    
    iRet = mobj.CountEven();
    cout<<"Number Of Even Elements in Matrix : "<<iRet<<"\n";
    
    iRet = mobj.SumEven();
    cout<<"Summation Of Even Elements is : "<<iRet<<"\n";
    
    return 0;
}