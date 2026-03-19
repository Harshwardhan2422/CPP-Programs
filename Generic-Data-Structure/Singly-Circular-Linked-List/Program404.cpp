#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node<T>*next;
};

template<class T>
class SinglyCL
{
    public:
        struct node<T>* head;
        struct node<T>* tail;
        int iCount;

        SinglyCL();  
          
        void InsertFirst(T no);  
          
        void InsertLast(T no);  
          
        void DeleteFirst();  
          
        void DeleteLast();  
          
        void InsertAtPos(T no, int ipos);  
          
        void DeleteAtPos(int ipos);  
          
        void Display();  
          
        int Count();

};

template<class T>
SinglyCL<T>:: SinglyCL()
{
    head = NULL;
    tail = NULL;
    iCount = 0;
}

template<class T>
void SinglyCL<T> :: InsertFirst(T no)
{
    struct node<T>* newn = NULL;
    newn = new node<T>;
    newn -> data = no;
    newn -> next = NULL;

    if((head == NULL) && (tail == NULL))  
    {  
        head = newn;  
        tail = newn;  
    }  
  
    else  
    {  
        newn -> next = head;  
        head = newn;  
    }  
    (tail) -> next = head;  
    iCount++;
}

template<class T>
void SinglyCL <T> :: InsertLast(T no)
{
    struct node<T>* newn = NULL;
    newn = new node<T>;
    newn -> data = no;
    newn -> next = NULL;

    if((head == NULL) && (tail == NULL))  
    {  
        head = newn;  
        tail = newn;  
    }  
  
    else   
    {  
        (tail) -> next = newn;  
        tail = newn;  
    }  
    (tail) -> next = head;  
    iCount++;

}

template<class T>
void SinglyCL<T> :: DeleteFirst()
{
    struct node<T>* temp = NULL;

    if((head == NULL) && (tail == NULL))  
    {  
        return;  
    }  
 
    else if(head == tail)  
    {  
        delete head;  
        head = NULL;  
        tail = NULL;  
    }  
 
    else  
    {  
        temp = head;  
        head = head -> next;  
        delete temp;  
        tail -> next = head;  
    }  
    iCount--;
}

template<class T>
void SinglyCL<T> :: DeleteLast()
{
    struct node<T>* temp = NULL;

    if((head == NULL) && (tail == NULL))  
    {  
        return;  
    }  
  
    else if(head == tail)  
    {  
        delete head;  
        head = NULL;  
        tail = NULL;  
    }  
  
    else  
    {  
        temp = head;  
                  
        while(temp -> next != tail)  
        {  
            temp = temp -> next;  
        }  
        delete tail;  
        tail = temp;  
        tail -> next = head;  
    }  
    iCount--;
}

template<class T>
void SinglyCL <T> :: InsertAtPos(T no, int ipos)
{
    int Countnode = 0, i = 0;

    Countnode = Count();  
              
    if((ipos < 1) || (ipos > Countnode + 1))  
    {  
        cout<<"Invalid Position \n";  
        return;  
    }  
  
    if(ipos == 1)  
    {  
        InsertFirst(no);  
    }  

    else if(ipos == Countnode + 1)  
    {  
        InsertLast(no);  
    }  
              
    else  
    {  
        struct node<T>* temp = NULL;
        struct node<T>* newn = NULL;
        newn = new node<T>;
        newn -> data = no;
        newn -> next = NULL;
        temp = head;  
                  
        for(i = 1; i < ipos - 1; i++)  
        {  
            temp = temp -> next;  
        }  
        newn -> next = temp -> next;  
        temp -> next = newn;  
        iCount++;  
    }
}

template<class T>
void SinglyCL <T> :: DeleteAtPos(int ipos)
{
    int Countnode = 0, i = 0;
    struct node<T>* temp = NULL;
    struct node<T>* target = NULL;

    Countnode = Count();  
              
    if((ipos < 1) || (ipos > Countnode))  
    {  
        cout<<"Invalid Position \n";  
        return;  
    }  
  
    if(ipos == 1)  
    {  
        DeleteFirst();  
    }  
  
    else if(ipos == Countnode)  
    {  
        DeleteLast();  
    }  
  
    else  
    {  
        temp = head;  
                  
        for(i = 1; i < ipos - 1; i++)  
        {  
            temp = temp -> next;  
        }  
        target = temp -> next;  
        temp -> next = target -> next;  
        delete target;  
        iCount--;  
    }
}

template<class T>
void SinglyCL<T> :: Display()
{
    if((head == NULL) && (tail == NULL))
    {
        cout<<"Linklist is Empty \n";
        return;
    }

    cout<<"Elements of Linklist Are : \n";  
    struct node<T>* temp = head;  
    do  
    {  
        cout<<"|"<<temp -> data<<"| ";  
        temp = temp -> next;  
    }while(temp != tail -> next);  
    cout<<"\n";
}

template<class T>
int SinglyCL<T>:: Count()
{
    return iCount;
}

int main()
{
    SinglyCL <float> sobj;
    int iRet = 0;

    sobj.InsertFirst(51.1f);  
    sobj.InsertFirst(21.9f);  
    sobj.InsertFirst(11.21f);  
  
    sobj.Display();  
    iRet = sobj.Count();  
    cout<<"Number Of Elements Are : "<<iRet<<"\n\n";  
  
    sobj.InsertLast(101.3f);  
    sobj.InsertLast(121.3f);  
    sobj.InsertLast(151.6f);  
  
    sobj.Display();  
    iRet = sobj.Count();  
    cout<<"Number Of Elements Are : "<<iRet<<"\n\n";  
  
    sobj.DeleteFirst();  
  
    sobj.Display();  
    iRet = sobj.Count();  
    cout<<"Number Of Elements Are : "<<iRet<<"\n\n";  
  
    sobj.DeleteLast();  
  
    sobj.Display();  
    iRet = sobj.Count();  
    cout<<"Number Of Elements Are : "<<iRet<<"\n\n";  
  
    sobj.InsertAtPos(75.8f,4);  
  
    sobj.Display();  
    iRet = sobj.Count();  
    cout<<"Number Of Elements Are : "<<iRet<<"\n\n";  
  
    sobj.DeleteAtPos(4);  
  
    sobj.Display();  
    iRet = sobj.Count();  
    cout<<"Number Of Elements Are : "<<iRet<<"\n\n";  
  
    return 0;
}