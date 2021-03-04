#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, i, c=0;
        stack <int> s;
        cin >> n >> k;
        int arr[n];
        for(i=0; i<n; i++)
            cin >> arr[i];

        for(i=0; i<n; i++)
        {
            while(!s.empty() && arr[i]>s.top() && c<k)
            {
                s.pop();
                c++;
            }
            s.push(arr[i]);
        }
        while(!s.empty() && c<k)
        {
            s.pop();
            c++;
        }

        stack <int> s1;
        while(!s.empty())
        {
            s1.push(s.top());
            s.pop();
        }

        while(!s1.empty())
        {
            cout << s1.top() << " ";
            s1.pop();
        }
        cout << endl;
    }
}
