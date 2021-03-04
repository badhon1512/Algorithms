#include<iostream>
using namespace std;
typedef struct Listnode
{
    int data;
    Listnode *next;
}*node;
node head=NULL,current;

void InsertAtHead(int data)
{
    node newnode=new Listnode;
    newnode->data=data;
    newnode->next=head;
    head=newnode;

}

void InsertAtTail(int x)
{
    node newnode=new Listnode;
    newnode->data=x;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        current=head;
        while(current->next!=NULL)
        {
            current=current->next;
        }
        current->next=newnode;
    }
}

void InsertAtANyPos(int n,int x)
{
    node newnode=new Listnode;
    newnode->data=x;
    node ptr=head;
    for(int i=1;i<n;i++)
    {
        ptr=ptr->next;
    }
    newnode->next=ptr->next;
    ptr->next=newnode;


}
void Traverse()
{
    node ptr=head;
    if(head==NULL)
    {
        cout<<"no data "<<endl;
        return;
    }
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
void Search(int x)
{
    node ptr=head;
    while(ptr!=NULL)
    {
        if(x==ptr->data)
        {
            cout<<"found"<<endl;
            return;
        }
        ptr=ptr->next;
    }
    cout<<"Not Found"<<endl;
}
void DeleteHead()
{
    node ptr=head;
    head=ptr->next;
    delete(ptr);
}

void DeleteTail()
{
    node ptr,dptr;
    ptr=head;
    while(ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    dptr=ptr->next;
    delete(dptr);
    ptr->next=NULL;
}
int main()
{
    InsertAtHead(10);
    InsertAtTail(15);
    InsertAtTail(2);
    InsertAtTail(20);
    InsertAtTail(25);
    InsertAtTail(30);
    DeleteHead();
    DeleteTail();


    Traverse();
    InsertAtANyPos(2,100);
     Traverse();
    Search(15);
    Search(100);

}
