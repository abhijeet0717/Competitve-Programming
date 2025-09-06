#include <bits/stdc++.h>
#define ll          long long
#define all(x)      x.begin(), x.end()
#define read(x)     ll x; cin >> x
#define readv(v,n) vector<ll>v(n); for(int i=0; i<n; i++)cin>>v[i];
using namespace std;

void solve() 
{
  int n;cin>>n;
  map<int, int> mp;
  vector<int> v(n);
  for (int i = 0; i < n; ++i)
  {
    cin>>v[i];
    mp[v[i]]++;
  }
  sort(all(v));
  for(auto &it: mp){
    if(it.second %2!=0){
    cout<<"YES\n";return;
  }
  }
  cout<<"NO\n";return;
}




int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    // t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}
