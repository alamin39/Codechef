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

    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=f=0;
        ll a[n],b[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        ans=a[0];
        b[0]=ans;
        ll cnt=0,p=0;
        for(i=1; i<n; i++)
        {
            ans = __gcd(ans,a[i]);
            b[i]=ans;
        }
        for(i=n-1; i>=0; i--)
        {
            if(b[i]==1)
            {
                f=1;
                break;
            }
        }

        if(f==0)
            cout<<-1<<endl;
        else
            cout<<n-1-i<<endl;
    }
    return 0;
}
