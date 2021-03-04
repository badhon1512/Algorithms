#include<iostream>
using namespace std;
void Swap(int *A,int *B)
{
    int temp;
    temp=*A;
    *A=*B;
    *B=temp;
}
void BubbleSort(int *A,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(A[j]>=A[j+1])
                Swap(&A[j],&A[j+1]);
        }
    }
}
int BinarySearch(int *A,int f,int l,int data)
{
    int mid;
    while(f<=l)
    {
       mid=(f+l)/2;
       if(data==A[mid])
        return mid;
       else if(data<A[mid])
       return BinarySearch(A,f,mid-1,data);
       else
        return BinarySearch(A,mid+1,l,data);


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
    BubbleSort(A,n);
    cout<<"After Sorting : "<<endl;
    print(A,n);

    cout<<"enter the data that You want to  Search :";
    cin>>data;
    int a=BinarySearch(A,0,n,data);
    if(a==-1)
        cout<<"Your data is not found !"<<endl;
    else
         cout<<"Your data is  found At index "<<a<<endl;

}

