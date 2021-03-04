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
    pivot=A[l];
    i=l;
    j=h;
    while(i<j)
    {

        do
        {
            i++;
        }
        while(A[i]<=pivot);

        do
        {
            j--;
        }
        while(A[j]>pivot);
        if(i<j)
            Swap(&A[i],&A[j]);

    }
    Swap(&A[j],&A[l]);
    return j;

}
void QuickSort(int *A,int low,int high)
{
    if(low<high)
    {
        int p=Partition(A,low,high);
        QuickSort(A,low,p);
        QuickSort(A,p+1,high);

    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i=0; i < n; i++)
    cout<<arr[i]<<" ";
    cout<<"n";
}


int main()
{
    int n;
    cout<<"Enter how many element do you want to insert : ";
    cin>>n;
    int A[n];
    cout<<"Enter "<<n<<" element :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    printArray(A,n);
    QuickSort(A,0,n);
    printArray(A,n);
}
