#include<iostream>
using namespace std;
void marge(int A[],int low,int mid,int high)
{
    int i,j,k,temp[high-low+1];
    i=low;
    j=mid+1;
    k=0;
    while(i<=mid&&j<=high)
    {
        if(A[i]<A[j])
        {
            temp[k]=A[i];
            k++;
            i++;
        }
        else
        {
            temp[k]=A[j];
            k++;
            j++;
        }
    }
    while(i<=mid)
    {
        temp[k]=A[i];

        k++;
        i++;
    }
    while(j<=high)
    {
        temp[k]=A[j];

        k++;
        j++;
    }
    for(i=low;i<=high;i++)
    {
        A[i]=temp[i-low];
    }

}
void margeSort(int A[],int Low,int High)
{
    int mid;
    if(Low<High)
    {
        mid=(Low+High)/2;
        margeSort(A,Low,mid);
        margeSort(A,mid+1,High);
        marge(A,Low,mid,High);
    }
}
int main()
{
    int n,i;
    cout<<"How many element do u want to sort:";
    cin>>n;
    int A[n];
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"enter element "<<i+1<<" ";
        cin>>A[i];
        cout<<endl;
    }
    margeSort(A,0,n-1);
    cout<<"Sorted elements are: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";

    }
}

