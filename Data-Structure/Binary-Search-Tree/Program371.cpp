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
};

int main()
{
    BST obj;
    bool bRet = false;
    
    obj.Insert(21);
    obj.Insert(11);
    obj.Insert(51);
    obj.Insert(35);
    obj.Insert(75);
    obj.Insert(18);
    obj.Insert(9);
    
    cout<<"Inorder\n";
    obj.Inorder();
    cout<<"\n\n";
    
    cout<<"Preorder\n";
    obj.Preorder();
    cout<<"\n\n";
    
    cout<<"Postorder\n";
    obj.Postorder();
    cout<<"\n\n";
    
    bRet = obj.Search(51);
    
    if(bRet == true)
    {
        cout<<"Element is present in BST \n";
    }
    
    else
    {
        cout<<"There is no such Element in BST \n";
    }
    
    return 0;
}