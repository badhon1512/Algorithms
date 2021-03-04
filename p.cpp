#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int *p;
    p=&a;
    cout<<*p<<endl;
     cout<<p<<endl;
    *p++;
    cout<<p<<endl;
     cout<<*p<<endl;
    *p++;
    cout<<p<<endl;
     cout<<*p<<endl;
}
