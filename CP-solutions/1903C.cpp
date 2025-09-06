#include <bits/stdc++.h>
#define ll          long long
#define all(x)      x.begin(), x.end()
#define read(x)     ll x; cin >> x
#define readv(v,n) vector<ll>v(n); for(int i=0; i<n; i++)cin>>v[i];
using namespace std;

void solve() 
{
  int n;cin>>n;
  int x;cin>>x;
  vector<int> v;
  int odd(0),zero_count(0),one_count(0);
  for (int i = 0; i < n; i++)
  {
    if (x%10==0)
    {
      zero_count++;
    }
    else one_count++;
    v.push_back(x%10);
    x/=10;
  }
  for (int i = 0; i < n-1; i++)
  {
      if (v[i]!=v[i+1])
      {
          odd++;
      }
  }
  if (zero_count>one_count || odd>abs(zero_count-one_count))
  {
      cout<<"YES\n";return;
  }
    cout<<"NO\n";
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
