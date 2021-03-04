#include<iostream>
using namespace std;

void margeSort(int *A,int l,int m,int h)
{
    int i,j,k;
    int temp[h-l+1];
    i=l;
    j=m+1;
    k=0;

while(i<=m&&j<=h)
{
    if(A[i]<=A[j])
    {
        temp[k]=A[i];
        i++;
        k++;
    }
    else
    {
        temp[k]=A[j];
        j++;
        k++;
    }
}
    while(i<=m)
    {
        temp[k]=A[i];
        i++;
        k++;

    }
    while(j<=h)
    {
        temp[k]=A[j];
        j++;
        k++;
    }
    for(i=l;i<=h;i++)
    {
        A[i]=temp[i-l];
    }
}
int marge(int *A,int l,int h)
{
    if(l<h)
    {
        int mid=(l+h)/2;
        marge(A,l,mid);
         marge(A,mid+1,h);
         margeSort(A,l,mid,h);

    }
}
int main()
{
    int n,i;
    cout<<"How many element do u want to sort:";
    cin>>n;
    int A[n];
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"enter element "<<i+1<<" ";
        cin>>A[i];
        cout<<endl;
    }
    marge(A,0,n-1);
    cout<<"Sorted elements are: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";

    }
}

