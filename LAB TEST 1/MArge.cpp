#include<iostream>
using namespace std;


void marge(int *A,int l,int mid,int h)
{
    int i,j,k,temp[h-l+1];
    i=l;
    j=mid+1;
    k=0;

    while(i<=mid&&j<=h)
    {
        if(A[i]<=A[j])
        {
            temp[k]=A[i];
            k++;
            i++;
        }
        else
            temp[k]=A[j];
             j++;
             k++;
    }
    while(i<=mid)
    {
        temp[k]=A[i];
        k++;
        i++;
    }
    while(j<=h)
{
    temp[k]=A[j];
    k++;
    j++;
}
for(int i=l;i<=h;i++)
{
    A[i]=temp[i-l];
}
}
void margeSort(int *A,int l,int h)
{
    if(l<h)
    {
        int mid=(l+h)/2;
        margeSort(A,l,mid);
        margeSort(A,mid+1,h);
        marge(A,l,mid,h);

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
    margeSort(A,0,n-1);
    cout<<"Sorted elements are: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";

    }
}

