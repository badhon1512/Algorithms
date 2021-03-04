#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int A[], int n)
{
    int min_i,i,j,temp;
    for(i=0;i<n;i++)
    {
        min_i=i;
        for(j=i+1;j<n;j++)
        {
            if(A[j]<A[min_i])
                min_i=j;
        }
        temp=A[i];
        A[i]=A[min_i];
        A[min_i]=temp;
    }
}

// A utility function to print an array of size n
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

/* Driver code */
int main()
{
    int arr[] = { 12, 11, 13, 5, 6 ,-10,-1};
    int n = sizeof(arr) / sizeof(arr[0]);

    SelectionSort(arr, n);
    printArray(arr, n);

    return 0;
}

