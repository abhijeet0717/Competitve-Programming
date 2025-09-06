#include <bits/stdc++.h>
#define ll          long long
#define all(x)      x.begin(), x.end()
#define read(x)     ll x; cin >> x
#define readv(v,n) vector<int>v(n); for(int i=0; i<n; i++)cin>>v[i];
using namespace std;

void solve() 
{
  int n;cin>>n;
  readv(v,n);
  int m=log2(n);
  bool flag(true);
  for (int i =0; i < n-1; i++)
  {
    if (v[i+1]<v[i]&& log2(i+1)!=(int)log2(i+1))
    {
      flag=false;
    }
  }
  if (flag)
  {
    cout<<"YES\n";
  }
  else{
    cout<<"NO\n";
  }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    //t=1;
     cin>>t;
    while(t--) solve();
    return 0;
}