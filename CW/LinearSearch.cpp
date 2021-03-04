#include<iostream>
using namespace std;
typedef struct Listnode
{
    int data;
    Listnode *next;
}*node;
node head=NULL,ptr,Current;
void Add(int data)
{
    node newnode=new Listnode;
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        Current=head;
        while(Current->next!=NULL)
        {
            Current=Current->next;
        }
        Current->next=newnode;
    }
}
void Display()
{
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

void LinearSearch(int data)
{
    int pos=0,count=0;
    ptr=head;
    while(ptr!=NULL)
    {
        pos++;
        if(ptr->data==data)
        {
            count++;
            cout<<"yes Found At Position "<<pos<<endl;
            break;
        }
        ptr=ptr->next;
    }
    if(count==0)
    {
        cout<<"data is Not Found !"<<endl;
    }
}
int main()
{
    int choice,data;
    cout<<"What Do you want ??"<<endl;
    cout<<"press 0)for return 1)for ADD data 2)for print List 3)for Linear Search "<<endl;
    while(1)
    {
        cout<<endl<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 0:
            return 0;
            break;
        case 1:
            cout<<"enter the data : ";
            cin>>data;
            Add(data);
            break;
        case 2:
            Display();
            break;
        case 3:
            cout<<"enter the data that You Want to be Search : ";
            cin>>data;
            LinearSearch(data);
            break;
        default:
            cout<<"opps! wrong Input"<<endl;

        }
    }
}
