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
            i++;
        while(A[i]<=pivot);
        do
            j--;
    while(A[j]>pivot);
    if(i<j)
    Swap(&A[i],&A[j]);


    }
    Swap(&A[l],&A[j]);
    return j;

}
void margeSort(int *A,int low,int high)
{
    if(low<high)
    {
        int pi=Partition(A,low,high);
        margeSort(A,low,pi);
        margeSort(A,pi+1,high);


    }
}
int BinarySearch(int *A,int low,int high,int data)
{
    while(low<high)
    {
        int mid=(low+high)/2;
    if(A[mid]==data)
        return mid;
        else if(A[mid]>data)
            return BinarySearch(A,low,mid-1,data);
        else
        return BinarySearch(A,mid+1,high,data);

    }
    return -1;

}
int main()
{
    int n,i,data;
    cout<<"enter the size of Array: ";
    cin>>n;
    int A[n];
    cout<<"Enter "<<n<<" data: ";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<endl;
    cout<<"Entered data: ";
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    margeSort(A,0,n);
    cout<<"enter the data that U want to be search : ";
    cin>>data;
    int p=BinarySearch(A,0,n-1,data);
    if(p==-1)
        cout<<"Not Found "<<endl;
    else
        cout<<"Your data is Found at index "<<p<<endl;
}

