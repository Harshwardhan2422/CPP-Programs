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
        
        void UpdateOdd()
        {    
            int i = 0, j = 0;
            
            for(i = 0; i < iRow; i++)
            {
                for(j = 0; j < iCol; j++)
                {
                    if(ptr[i][j] % 2 != 0)
                    {
                        ptr[i][j]++;
                    }
                }
            }
        }
        
        void MaxRow()
        {
            int i = 0, j = 0, iMax = 0;
            
            for(i = 0; i < iRow; i++)
            {
                iMax = ptr[i][0];
                
                for(j = 0; j < iCol; j++)
                {
                    if(ptr[i][j] > iMax)
                    {
                        iMax = ptr[i][j];
                    }
                }
                cout<<"Maximum Element Row : "<<i<<" is :"<<iMax<<"\n";
            }
        }
        
        void MinRow()
        {
            int i = 0, j = 0, iMin = 0;
            
            for(i = 0; i < iRow; i++)
            {
                iMin = ptr[i][0];
                
                for(j = 0; j < iCol; j++)
                {
                    if(ptr[i][j] < iMin)
                    {
                        iMin = ptr[i][j];
                    }
                }
                cout<<"Minimum Element Row : "<<i<<" is :"<<iMin<<"\n";
            }
        }
        
        int SumOfDiagonal()
        {
            int i = 0, j = 0, iSum = 0;
            
            if(iRow != iCol)
            {
                cout<<"Unable To Perform Addition of Diagonal \n";
                return -1;
            }
            
            for(i = 0; i < iRow; i++)
            {
                for(j = 0; j < iCol; j++)
                {
                    if(i == j)
                    {
                        iSum = iSum + ptr[i][j];
                    }
                }
            }
            return iSum;
        }
        
        int BorderAddition()
        {
            int i = 0, j = 0, iSum = 0;
            
            for(i = 0; i < iRow; i++)
            {
                for(j = 0; j < iCol; j++)
                {
                    if(i == 0 || i == iRow -1 || j == 0 || j == iCol -1)
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
    
    iRet =mobj.BorderAddition();
    cout<<"Addition Of Matrix Border is : "<<iRet<<"\n";
    
    return 0;
}