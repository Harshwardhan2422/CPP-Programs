#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

typedef struct node NODE;
typedef struct node* PNODE;

class BST 
{
    public:
        PNODE head;
        
        BST()
        {
            head = NULL;
        }
        
        void Insert(int no)
        {
            PNODE newn = NULL;
            PNODE temp = NULL;
            newn = new node();
            newn -> data = no;
            newn -> lchild = NULL;
            newn -> rchild = NULL;
            
            if(head == NULL)
            {
                head = newn;
                return;
            }
            
            temp = head;
            
            while(1)
            {
                if(no > temp -> data)
                {
                    if(temp -> rchild == NULL)
                    {
                        temp -> rchild = newn;
                        break;
                    }
                    temp = temp -> rchild;
                }
                
                else if(no < temp -> data)
                {
                    if(temp -> lchild == NULL)
                    {
                        temp -> lchild = newn;
                        break;
                    }
                    temp = temp -> lchild;
                }
                
                else
                {
                    delete newn;
                    break;
                }
            }
        }
        
        void Inorder(PNODE temp)
        {
            if(temp != NULL)
            {
                Inorder(temp -> lchild);
                cout<<temp -> data<<"\t";
                Inorder(temp -> rchild);
            }
        }
        void Inorder()
        {
            Inorder(head);
        }
        
        void Preorder(PNODE temp)
        {
            if(temp != NULL)
            {
                cout<<temp -> data<<"\t";
                Preorder(temp -> lchild);
                Preorder(temp -> rchild);
            }
        }
        void Preorder()
        {
            Preorder(head);
        }
        
        void Postorder(PNODE temp)
        {
            if(temp != NULL)
            {
                Postorder(temp -> lchild);
                Postorder(temp -> rchild);
                cout<<temp -> data<<"\t";
            }
        }
        void Postorder()
        {
            Postorder(head);
        }
        
        bool Search(int no)
        {
            bool bFlag = false;
            PNODE temp = NULL;
            temp = head;
            
            while(temp != NULL)
            {
                if(no == temp -> data)
                {
                    bFlag = true;
                    break;
                }
                
                else if(no > temp -> data)
                {
                    temp = temp -> rchild;
                }
                
                else
                {
                    temp = temp -> lchild;
                }
            }
            return bFlag;
        }
        
        int Countnode(PNODE temp)
        {
            static int iCount = 0;
            
            if(temp != NULL)
            {
                iCount++;
                Countnode(temp -> lchild);
                Countnode(temp -> rchild);
            }
            return iCount;
        }
        void Resetnode()
        {
            Countnode(NULL);
        }
        
        int CountParentNode(PNODE temp)
        {
            static int iCount = 0;
            
            if(temp != NULL)
            {
                if((temp -> lchild != NULL) || (temp -> rchild != NULL))
                {
                    iCount++;
                }
                CountParentNode(temp -> lchild);
                CountParentNode(temp -> rchild);
            }
            return iCount;
        }
        void ResetParentnode()
        {
            CountParentNode(NULL);
        }
        
        int CountLeafNode(PNODE temp)
        {
            static int iCount = 0;
            
            if(temp != NULL)
            {
                if((temp -> rchild == NULL) && (temp -> lchild == NULL))
                {
                    iCount++;
                }
                CountLeafNode(temp -> lchild);
                CountLeafNode(temp -> rchild);
            }
            return iCount;
        }
        void ResetLeafnode()
        {
            CountLeafNode(NULL);
        }
        
        int Max()
        {
            PNODE temp = NULL;
            
            if(head == NULL)
            {
                return -1;
            }
            
            temp = head;
            
            while(temp -> rchild != NULL)
            {
                temp = temp -> rchild;
            }
            return temp -> data;
        }
        
        int Min()
        {
            PNODE temp = NULL;
            
            if(head == NULL)
            {
                return -1;
            }
            
            temp = head;
            
            while(temp -> lchild != NULL)
            {
                temp = temp -> lchild;
            }
            return temp -> data;
        }
        
        int SumLeftChild(PNODE temp)
        {
            static int iCount = 0;
            
            if(temp != NULL)
            {
                if(temp -> lchild != NULL)
                {
                    iCount = iCount + temp -> lchild -> data;
                }
                SumLeftChild(temp -> lchild);
                SumLeftChild(temp -> rchild);
            }
            return iCount;
        }
        void ResetSumLeftChild()
        {
            SumLeftChild(NULL);
        }
};

int main()
{
    BST obj;
    int iRet = 0;
    bool bRet = false;
    
    obj.Insert(21);
    obj.Insert(11);
    obj.Insert(51);
    obj.Insert(35);
    obj.Insert(75);
    obj.Insert(18);
    obj.Insert(9);
    
    iRet = obj.Max();
    cout<<"Largest Number of Bst is : "<<iRet<<"\n";
    
    iRet = obj.Min();
    cout<<"Smallest Number of Bst is : "<<iRet<<"\n";
    
    obj.ResetSumLeftChild();
    iRet = obj.SumLeftChild(obj.head);
    cout<<"Sum Of Left Child is : "<<iRet<<"\n";
    
    return 0;
}