#include<iostream>
using namespace std;
void Swap(int *A,int *B)
{
    int temp;
    temp=*A;
    *A=*B;
    *B=temp;
}
void BubbleSort(int A[],int o)
{
    cout<< "o before bubble: "<<o<<endl;
    for(int i=0;i<o;i++)
    {
        for(int j=0;j<o-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                Swap(&A[j],&A[j+1]);
            }

        }
    }
    cout<< "o after bubble: "<<o<<endl;

}
void printArray(int arr[], int k)
{
    cout<<"k= "<<k<<endl;
    int i,c=0;
    for (i = 0; i < k; i++)
    {
         cout << arr[i] << " ";
    cout << endl;
    c++;
    }
    cout<<"k after loop= "<<k;


}
int main()
{
    int arr[] = {12,11,17,5,61,10,1};
    int y = sizeof(arr) / sizeof(arr[0]);
    cout<< "y before bubble: "<<y<<endl;

    BubbleSort(arr,y);
    cout<< "y after bubble: "<<y<<endl;
    printArray(arr,y);

    return 0;
}
