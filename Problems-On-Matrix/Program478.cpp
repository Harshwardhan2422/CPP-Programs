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
        
        void DigitCount()
        {
            int i = 0, j = 0, iCount = 0, iNo = 0;
            
            for(i = 0; i < iRow; i++)
            {
                for(j = 0; j < iCol; j++)
                {
                    iNo = ptr[i][j];
                    iCount = 0;
                    
                    while(iNo != 0)
                    {
                        iNo = iNo / 10;
                        iCount++;
                    }
                    cout<<"Digit Count Of "<<ptr[i][j]<<" is : "<<iCount<<"\n";
                }
            }
        }
        
        void SumDigit()
        {
            int i = 0, j = 0, iSum = 0, iDigit = 0, iNo = 0;
            
            for(i = 0; i < iRow; i++)
            {
                for(j = 0; j < iCol; j++)
                {
                    iNo = ptr[i][j];
                    iSum = 0;
                    
                    while(iNo != 0)
                    {
                        iDigit = iNo % 10;
                        iSum = iSum + iDigit;
                        iNo = iNo / 10;
                        
                    }
                    cout<<"Sum Of Digits is : "<<ptr[i][j]<<" is : "<<iSum<<"\n";
                }
            }
        }
        
        int Maximum()
        {
            int i = 0, j = 0;
            int iMax = ptr[i][j];
            
            for(i = 0; i < iRow; i++)
            {
                for(j = 0; j < iCol; j++)
                {
                    if(ptr[i][j] > iMax)
                    {
                        iMax = ptr[i][j];
                    }
                }
            }
            return iMax;
        }
        
        int Minimum()
        {
            int i = 0, j = 0;
            int iMin = ptr[i][j];
            
            for(i = 0; i < iRow; i++)
            {
                for(j = 0; j < iCol; j++)
                {
                    if(ptr[i][j] < iMin)
                    {
                        iMin = ptr[i][j];
                    }
                }
            }
            return iMin;
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
    
    iRet = mobj.Maximum();
    cout<<"Maximum Element of Matrix is : "<<iRet<<"\n";
    
    iRet = mobj.Minimum();
    cout<<"Minimum Element of Matrix is : "<<iRet<<"\n";
    
    return 0;
}