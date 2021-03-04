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
    int i,j,min_i,temp;
    for(i=0;i<n;i++)
    {
        min_i=i;
        for(j=i+1;j<n;j++)
        {
           if(A[j]<=A[min_i])
           {
               min_i=j;
           }
        }
        Swap(&A[min_i],&A[i]);


    }
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
    SelectionSort(A,n);

    cout<<"After Sorting : "<<endl;
    print(A,n);





}

