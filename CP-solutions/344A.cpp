#include <bits/stdc++.h>
#define ll          long long
#define all(x)      x.begin(), x.end()
#define read(x)     ll x; cin >> x
#define readv(v,n) vector<int>v(n); for(int i=0; i<n; i++)cin>>v[i];
using namespace std;

void solve() 
{
  int n,count(1);cin>>n;
  int prev;cin>>prev;
  for (int i = 1; i < n; i++)
  {
    int curr;
    cin>>curr;
    if (curr!=prev)
    {
      count++;
    }
    prev=curr;
  }
  cout<<count;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    t=1;
     // cin>>t;
    while(t--) solve();
    return 0;
}