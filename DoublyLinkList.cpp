#include<iostream>
using namespace std;

typedef struct Listnode
{
    int data;
    Listnode *next,*prev;


}*node;
node head=NULL,Curr;
void InsertAtHead(int x)
{
    node newnode=new Listnode;
    newnode->data=x;
    newnode->next=head;
    newnode->prev=NULL;
    head=newnode;
}

void InsertAtTail(int x)
{
    node newnode=new Listnode;
    newnode->data=x;
    node ptr=head;
    if(head==NULL)
    {
        head=newnode;
        newnode->next=NULL;
        newnode->prev=NULL;
    }
    else
    {
        Curr=head;
        while(Curr->next!=NULL)
        {
            Curr=Curr->next;
        }
        Curr->next=newnode;
        newnode->next=NULL;
        newnode->prev=Curr;

    }

}
void InsertAtnTh(int n,int x)
{
    node newnode=new Listnode;
    newnode->data=x;
    node ptr=head,ptr2;
    if(head==NULL)
    {
        head=newnode;
        newnode->next=NULL;
        newnode->prev=NULL;
        return;
    }
    if(n==1)
    {


        newnode->next=head;
        head=newnode;
        newnode->prev=NULL;
        return;

    }
    for(int i=1;i<n-1;i++)
    {
        ptr=ptr->next;
    }
    newnode->next=ptr->next;
    ptr->next=newnode;
    ptr->prev=ptr;


}
void Traverse()
{
    node ptr=head;
    if(head==NULL)
    {
        cout<<"no data "<<endl;
    }
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
void Backtraverse()
{
    node ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->prev;

    }
    cout<<endl;
}

void DeleteHead()
{
    node ptr,dptr;
    ptr=head;
    head=ptr->next;
    delete(ptr);
}
void deleteTail()
{
    node ptr,dptr,ptr2;
    ptr=head;
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
    node ptr=head,dptr,ptr2;
    if(n==1)
    {
        head=ptr->next;
        delete(head);
        return;
    }

    for(int i=1;i<n-1;i++)
    {
      ptr=ptr->next;
    }
    dptr=ptr->next;
    ptr->next=ptr->next->next;
    ptr2=ptr->next->next;
    ptr2->prev=ptr;
}
int main()
{
    InsertAtHead(10);
    InsertAtHead(20);
    InsertAtHead(5);
    Traverse();
    //Backtraverse();
    InsertAtTail(5);
    InsertAtTail(25);
    InsertAtTail(30);
    InsertAtTail(100);
    Traverse();
    DeleteHead();
    Traverse();
    deleteTail();
    Traverse();
    DeleteNth(2);
     Traverse();
     InsertAtnTh(2,10000);
      Traverse();
      Backtraverse();


}
