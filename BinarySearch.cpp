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
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(A[j]>A[j+1])
            {
                Swap(&A[j],&A[j+1]);
            }
        }
    }
}

int BinarySearch(int *A,int First,int Last,int data)
{
    int mid;
    while(Last>=First)
    {
      mid=(First+Last)/2;
      if(A[mid]==data)
      {
          return mid;
      }
      else if(data>A[mid])
      return BinarySearch(A,mid+1,Last,data);
      else
      return  BinarySearch(A,First,mid-1,data);


    }
    return -1;
}
int main()
{
    int n,*A,i,data;
    cout<<"How many Element DO U want to store ??"<<endl;
    cin>>n;
    A=new int[n];
    cout<<"Enter "<<n<<" element"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
  cout<<"Entered elements are : ";
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    BubbleSort(A,n);
    cout<<"sorted elements are : ";
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl<<"Enter the data that you want to be search : ";
    cin>>data;
    int a=BinarySearch(A,0,n-1,data);

    if(a==-1)
        cout<<"Opps your data is not found !"<<endl;
    else
        cout<<"Your data is found at index "<<a<<endl;

}
