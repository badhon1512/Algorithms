#include<iostream>
using namespace std;
void Swap(int *A,int *B)
{
    int temp;
    temp=*A;
    *A=*B;
    *B=temp;
}
int Partition(int *A,int h,int l)
{
    int pivot,i,j;
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
void QuickSort(int *A,int l,int h)
{
   if(h>l)
   {
       int pi=Partition(A,h,l);
       QuickSort(A,l,pi);
       QuickSort(A,pi+1,h);



   }
}
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main()
{
    int arr[] = { 12, 11, 13, 5, 6 ,-10,-1};
    int n = sizeof(arr) / sizeof(arr[0]);

    QuickSort(arr,0,n+1);
    printArray(arr, n);

    return 0;
}


