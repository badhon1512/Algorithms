#include<iostream>
using namespace  std;
int LinearSearch(int *A,int data,int n)
{
    for(int i=0;i<n;i++)
    {
        if(A[i]==data)
        {
            return i;
            break;
        }
    }
    return -1;
}
void print(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n,i,data;
    cout<<"enter the size of your Array..!";
    cin>>n;
    int A[n];
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"enter the data that You want to  Search :";
    cin>>data;
    int a=LinearSearch(A,data,n);
    if(a==-1)
        cout<<"Your data is not found !"<<endl;
    else
         cout<<"Your data is  found At index "<<a<<endl;

}
