#include <bits/stdc++.h>
using namespace std;

typedef long long   ll;
#define umap        unordered_map
#define speed       ios_base::sync_with_stdio(false); cin.tie(NULL)
#define all(x)      x.begin(), x.end()
#define pb          push_back
#define read(x)     int x;cin>>x;
#define readll(x)   ll x;cin>>x;
#define readv(v,n)  vector<int> v(n);for(int i=0;i<n;i++) cin>>v[i];
#define readvll(v,n)  vector<ll> v(n);for(int i=0;i<n;i++) cin>>v[i];
const int N=2*1e5;

ll presum[N+1];

int main()
{
speed;
for (int i = 1; i <=N; i++)
{
	presum[i]=presum[i-1]+i;
}
int t;
cin>>t;
while(t--)
{
    ll n,k,x;cin>>n>>k>>x;
    ll minm(0),maxm(0);
    minm=presum[k];
    maxm=presum[n]-presum[n-k];
    //cout<<t<<" "<<minm<<" "<<maxm<<endl;
    if(x<=maxm &&x>=minm)
    {
    	cout<<"YES\n";
    }
    else cout<<"NO\n";
}
return 0;
}