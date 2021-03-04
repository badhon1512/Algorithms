#include<iostream>
using namespace std;
struct Listnode
{
    int data;
    Listnode *next;
}*node;
node head=NULL,Current;

void InsertAtTail(int x)
{
    node newnode=new Listnode;
    newnode->data=x;
    newnode->next=head;
    head=newnode;

}
void Traverse()
{
    node ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data;
        ptr=ptr->next;
    }
}
int main()
{
    InsertAtTail(10);
    Traverse();

}
