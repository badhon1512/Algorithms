#include<iostream>
using namespace std;
typedef struct Listnode
{
    int data;
    Listnode *next;
}*node;
node head=NULL,curr;
void InsertAthead(int x)
{
    node newnode=new Listnode;
    newnode->data=x;
    newnode->next=head;
    head=newnode;
}
void InsertAtTail(int x)
{
    node newnode=new Listnode;
    newnode->data=x;
    newnode->next=NULL;
    if(head==NULL)
    head=newnode;
    else
    {
        curr=head;
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        curr->next=newnode;
    }
}
void InsertAtnThPos(int n,int x)
{
    node newnode=new Listnode;
    newnode->data=x;
    node ptr=head;
    if(n==1)
    {
        InsertAthead(x);

    }
    else
    {
       for(int i=1;i<n-1;i++)
    {
        ptr=ptr->next;
    }
    newnode->next=ptr->next;
    ptr->next=newnode;

    }

}

void DeleteHead()
{
    node ptr;
    ptr=head;
    head=ptr->next;
    delete(ptr);
}
void deleteTail()
{
    node ptr=head,dptr;
    while(ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    dptr=ptr->next;
    ptr->next=NULL;
    delete(dptr);

}
void DeleteNth(int n)
{
    if(head==NULL)
    {
        cout<<"list is empty"<<endl;
        return;
    }
    if(n==1)
    {
        DeleteHead();
        return;
    }

        node ptr=head,dptr;
        for(int i=1;i<n-1;i++)
        {
            ptr=ptr->next;
        }
        dptr=ptr->next;
        ptr->next=ptr->next->next;
        delete(dptr);

}
void Traverse()
{
    node ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
int main()
{
    InsertAthead(10);
    InsertAthead(5);
    InsertAtTail(15);
    InsertAtTail(20);
    InsertAtnThPos(1,2);
    Traverse();
    DeleteHead();
    Traverse();
    deleteTail();
    Traverse();
    DeleteNth(2);
    Traverse();
}
