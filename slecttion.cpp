#include<iostream>
using namespace std;
void Swap(int *A,int *B)
{
    int temp;
    temp=*A;
    *A=*B;
    *B=temp;
}
void Selectionsort(int *A,int n)
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
    }

}

