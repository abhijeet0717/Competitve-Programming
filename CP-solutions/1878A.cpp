#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MAX = 200007;
const int MOD = 1000000007;
void solve() {
   ll n,k;cin>>n>>k;
   vector<ll> v(n);
   for(ll i=0;i<n;i++) cin>>v[i];
   bool flag(false);
   for (ll i = 0; i < n; i++)
   {
      if (v[i]==k)
      {
         flag=true;
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
    cin>>t;
    while(t--)
    {
     solve();
    }
    return 0;
}