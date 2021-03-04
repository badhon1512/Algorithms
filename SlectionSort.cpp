#include<iostream>
using namespace std;
void Swap(int *A,int *B)
{
    int temp;
    temp=*A;
    *A=*B;
    *B=temp;
}
void SelectionSort(int *A,int n)
{
    int i,j,min_i;
    for(i=0;i<n;i++)
    {
        min_i=i;
        for(j=i+1;j<n;j++)
        {
            if(A[j]<A[min_i])
            {
                 min_i=j;
            }


        }
        Swap(&A[i],&A[min_i]);
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
    SelectionSort(A,n);
     cout<<endl<<"After sorting  Elements are: ";
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }

}



