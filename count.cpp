#include<iostream>
using namespace std;
void display(int *A, int n) {
   for(int i = 1; i<=n; i++)
      cout << A[i] << " ";
   cout << endl;
}
int getMax(int A[], int n) {
   int max = A[1];
   for(int i = 2; i<=n; i++) {
      if(A[i] > max)
         max = A[i];
   }
   return max;
}
void CountSort(int *A,int n)
{
    int output[n+1],i;
    int max=getMax(A,n);
    int Count[max+1];
    for(i=0;i<=max;i++)
    {
        Count[i]=0;
    }
    for(i=1;i<=n;i++)
    {
        Count[A[i]]++;
    }
    for(i=1;i<=max;i++)
    {
        Count[i]+=Count[i-1];
    }
    for(i=n;i>=1;i--)
    {
        output[Count[A[i]]]=A[i];
        Count[A[i]]--;
    }
    for(i=1;i<=n;i++)
    {
        A[i]=output[i];
    }
}
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n+1];       //create an array with given number of elements
   cout << "Enter elements:" << endl;
   for(int i = 1; i<=n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   CountSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
}

