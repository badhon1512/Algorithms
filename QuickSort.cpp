#include<iostream>
using namespace std;
void Swap(int *A,int *B)
{
    int temp;
    temp=*A;
    *A=*B;
    *B=temp;
}
int Partition(int *A,int l,int h)
{
    int i,j,pivot;
    i=l;
    j=h;
    pivot=A[l];
    while(i<j)
    {
        do
    {
        i++;
    }
    while(pivot>=A[i]);
    do
    {
        j--;
    }
    while(pivot<A[j]);

    if(i<j)
        Swap(&A[i],&A[j]);

    }
    Swap(&A[l],&A[j]);
    return j;

}
void QuickSort(int *A,int low,int high)
{
    if(low<high)
    {
        int pi=Partition(A,low,high);
        QuickSort(A,pi+1,high);
        QuickSort(A,low,pi);


    }
}
int BinarySearch(int *A,int l,int data,int h)
{
    int mid;
    while(l<h)
    {
        mid=(l+h)/2;
        if(A[mid]==data)
            return mid;
        else if(A[mid]<data)
            return BinarySearch(A,mid+1,data,h);
        else
            return BinarySearch(A,l,data,mid-1);

    }
    return -1;

}
int main()
{
    int n,i,data;
    cout<<"Enter the size of your array: ";
    cin>>n;
    int A[n];
    cout<<"Enter "<<n<<" Element : ";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<endl<<"Your Entered Elements Are: ";
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    QuickSort(A,0,n);
    cout<<endl<<"After Sorting elements Are: ";
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
     cout<<endl;
     cout<<"enter data that you you want to search : ";
     cin>>data;
    int I=BinarySearch(A,0,data,n-1);
    if(I==-1)
        cout<<"Your data is not Found "<<endl;
    else
     cout<<"Your data is  Found at index "<<I<<endl;

}
