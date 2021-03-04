#include<iostream>
using namespace std;

void Bsort(int *A,int n,int i)
{
    int small=A[i],j,temp;
    for(j=0;j<n-1;j++)
    {
        if(A[j]<A[j+1])
        {
            temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
        }
    }
}
int main()
{
    int A[]={15,4,3,2,1};
    int n=5;
    for(int i=0;i<n;i++)
    {
        Bsort(A,n,i);
        //n--;

    }
    for(int i=0;i<n;i++)
    {
       cout<<A[i]<<" ";

    }
}
