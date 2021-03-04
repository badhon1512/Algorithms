#include<iostream>
using namespace std;
int main()
{
    int r1=3,c1=3,r2=3,c2=3;
    int i,j,k;
    int a[10][10]={{1,2,3},
            {1,2,3},
            {1,2,3}};
    int b[10][10]={{1,2,3},
            {1,2,3},
            {1,2,3}};

    int product[r1][c2];
    if(c2!=r2)
    {
        cout<<"for multiplication c2 must be equal to r2!"<<endl;

    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            product[i][j]=0;
        }
    }

    for(i=0;i<r1;++i)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                product[i][j]+=a[i][k]*b[k][j];
            }
        }
    }


    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<product[i][j]<<" ";
        }
        cout<<endl;
    }

}


