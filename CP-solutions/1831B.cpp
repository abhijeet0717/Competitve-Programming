#include <bits/stdc++.h>
#define ll          long long
#define all(x)      x.begin(), x.end()
#define read(x)     ll x; cin >> x
#define readv(v,n) vector<ll>v(n); for(ll i=0; i<n; i++)cin>>v[i];
using namespace std;

void solve() 
{
   int n;cin>>n;
   int a[n],b[n];
   map<int,int> mp,mp_f;
   
   for(int i=0;i<n;i++) {cin>>a[i];}
   for(int i=0;i<n;i++) {cin>>b[i];}
   for (int i = 1; i < n-1; i++)
    {
        if(a[i]==a[i-1]) {
            mp[a[i-1]]=max(mp[a[i-1]],i-i);
            cout<<mp[a[i-1]]<<"a";
        }
    } 
    for (int i = 1; i < n-1; i++)
    {
        if(b[i]==b[i-1]) {
            mp_f[b[i-1]]=max(mp[b[i-1]],i-i);
        }
    } 
    mp_f[b[n-1]] = max(mp_f[b[n-1]],1);
    int ans(0);
    for(auto &ele : mp){
    ans = max(ans, ele.second + mp_f[ele.first]);
}
    for(auto &ele : mp_f){
    ans = max(ans, ele.second + mp[ele.first]);
}
cout<<ans<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;cin>>t;
    while(t--) solve();
    return 0;
}