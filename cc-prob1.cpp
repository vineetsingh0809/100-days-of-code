#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a[n];
        int sum = 0;
        for (int i = 0; i <= n; i++)
        {
            cin>>a[i];
            sum = sum + a[i];
        }

        if (sum%k == 0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<"1"<<endl;
        }
        
        
    }
    return 0;
}