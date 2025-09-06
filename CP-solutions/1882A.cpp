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

int main()
{
speed;
int t;
cin>>t;
while(t--)
{
    int n;cin>>n;
    int ans(1);
    for (int i = 0; i < n; i++)
    {
    	int x;cin>>x;
    	if(ans==x){
    		ans++;
    	}
    	if(i!=n-1) ans++;
    }
    cout<<ans<<endl;
}
return 0;
}