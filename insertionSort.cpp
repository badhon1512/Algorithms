#include<iostream>
using namespace std;
void insertionSort(int *A,int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=A[i];
        j=i-1;
        while(j>=0&&temp<A[j])
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=temp;
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
    int arr[] = {12,11, 13, 5, 6 ,-10,-1};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}


