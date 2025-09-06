#include<bits/stdc++.h>


using namespace std;


#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define read(x)     int x;cin>>x;
#define readll(x)   ll x;cin>>x;
#define readv(v,n)  vector<int> v(n);for(int i=0;i<n;i++) cin>>v[i];
#define readvll(v,n)  vector<ll> v(n+1);for(int i=1;i<=n;i++) cin>>v[i];
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define loop(x,n) for (ll i = x; i < n; i++)
#define loopj(x,n) for (ll j = x; j < (n); j++)
#define rloop(n,x) for (ll i = n-1; i>=x; i--)


typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#ifndef ONLINE_JUDGE
  #include "debug.h" 
#else
  #define debug(x...)
#endif

void solve() 
{
  ll n,k,q;cin>>n>>k>>q;
  readvll(a,k);readvll(b,k);
  for(int i=0;i<q;i++){
  	ll d;cin>>d;
  	if(d==0) {cout<<0<<" ";continue;}
  	ll pt=lower_bound(all(a),d)-a.begin();
  	debug(pt);
  	ll time=b[pt-1]+(d-a[pt-1])*(b[pt]-b[pt-1])/(a[pt]-a[pt-1]);
  	cout<<time<<" ";
  }
  cout<<endl;
  return;
}


int main() {
#ifndef ONLINE_JUDGE
   freopen("Error.txt", "w", stderr);
#endif
   fastio();
   int TT;
    TT=1;
    cin>>TT;
    while(TT--) solve();
    return 0;

}