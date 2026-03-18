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
            newn = new NODE();
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
};

int main()
{
    BST obj;
    
    obj.Insert(21);
    obj.Insert(51);
    obj.Insert(101);
    
    cout<<"Inorder\n";
    obj.Inorder();

    return 0;
}