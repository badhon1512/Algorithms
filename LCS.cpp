#include<iostream>
using namespace std;
void LCS_Length(int x[],int y[])
{
    int m=sizeof(x[]/x[0]);
    int n=sizeof(y[]/y[0]);
    int b[n][m];
    int c[n][m];
    int i,j,k;
    for(i=1;i<=m)
        c[i][0]=0;
    for(j=1;j<=n;j++)
    c[0][j]=0;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(x[i]==y[j])
            {
                c[i][j]=c[i-1][j-1]+1;

            }
        }
    }
}
