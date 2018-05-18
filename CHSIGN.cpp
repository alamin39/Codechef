///Bismillahir Rahmanir Rahim.
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll i,j,k,n,m,t,sum=0,ans=0;
    bool f=0,flag=0;
    string s;

    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(i=0;i<n;i++)
        {
            if(i==0 && a[i]<a[i+1])
                a[i]=-a[i];
           else if(i==n-1&&a[i]<a[i-1])
            a[i]=-a[i];
           else if(a[i]<a[i-1]&& a[i]<a[i+1])
                a[i]=-a[i];
        }
        cout<<a[0];
        for(i=1;i<n;i++)
            cout<<" "<<a[i];
        cout<<endl;
    }

    return 0;
}
