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
    i=l;
    pivot=A[l];
    j=h;
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
            {
                Swap(&A[i],&A[j]);

            }

    }
     Swap(&A[l],&A[j]);
     return j;

}
void Quick(int *A,int l,int h)
{
    if(l<h)
    {
        int pi=Partition(A,l,h);
        Quick(A,l,pi);
        Quick(A,pi+1,h);

    }
}
int main()
{
    int n;
    cout<<"enter the number of element ";
    cin>>n;
    int A[n];
    cout<<"enter "<<n<<" input:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"entered element are :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    Quick(A,0,n);
    cout<<"After Sorting "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";

    }
}
