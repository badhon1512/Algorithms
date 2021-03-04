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
int main()
{
    int n,*A,i;
    cout<<"Enter the size Of Array: ";
    cin>>n;
    A=new int[n];
    cout<<"Enter "<<n<<" number of Element: ";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"entered number of Elements are: ";
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    BubbleSort(A,n);
     cout<<endl<<"After sorting  Elements are: ";
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }

}
