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
};
int main()
{
    Matrix mobj(4,3);
    
    mobj.Accept();
    mobj.Display();
    
    return 0;
}