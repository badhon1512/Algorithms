#include<bits/stdc++.h>
using namespace std;
struct Item
{
    int value;
    int weight;
};
int cmp(struct Item A,struct Item B)
{
    double r1=(double)A.value/A.weight;
    double r2=(double)B.value/B.weight;
    return r1>r2;

}
double Fknapsack(int w,struct Item A[],int n)
{
    sort(A,A+n,cmp);
    int currweight=0;
    double Fvalue=0.0;

    for(int i=0;i<n;i++)
    {
        if(currweight+A[i].weight<=w)
        {
            Fvalue+=A[i].value;
            currweight+=A[i].weight;
        }
        else
        {
            int remain=w-currweight;
            Fvalue+=A[i].value*(double)remain/A[i].weight;
        }
    }
    return Fvalue;

}


int main()
{
    int w=50;
Item A[] = {{60, 10}, {100, 20}, {120, 30}};

int n=sizeof(A)/sizeof(A[0]);
cout<<"value = "<<Fknapsack(w,A,n)<<endl;
}
