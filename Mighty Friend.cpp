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
        cin>>n>>k;
        ll a,motu=0,tomu=0;
        m=0;
        vector<ll>v,vv;
        for(i=0; i<n; i++)
        {
            cin>>a;
            if(i%2==0)
                v.push_back(a),motu+=a;
            else
                vv.push_back(a),tomu+=a;
        }

        sort(v.rbegin(),v.rend());
        sort(vv.begin(),vv.end());

        ll ms=v.size(),ts=vv.size();

        m= max(ms,ts);

        for(i=0; i<k && i<min(ms,ts); i++)
        {
            if(v[i]>vv[i])
            {
                //cout<< v[i]<<" "<<vv[i]<<endl;
                tomu+=v[i],tomu-=vv[i];
                motu+=vv[i],motu-=v[i];
            }
        }

      //  cout<<motu << " "<<tomu<<endl;

        if(motu>=tomu)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }

    return 0;
}
