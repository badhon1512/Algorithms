#include<iostream>
using namespace std;
int main()
{
    int n,i,data,index;
    bool found=false;
    cout<<"Enter number of element : ";
    cin>>n;
    int A[n];
    cout<<"enter "<<n<<" elements :"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"enter the data that you want to search : ";
    cin>>data;
    for(i=0;i<n;i++)
    {
        if(data==A[i])
        {
             found=true;
             index=i;
             break;
        }
    }
    if(found==false)
        cout<<"Not Found ";
    else
        cout<<"Your data is found at index "<<index;

}
