#include<bits/stdc++.h>


using namespace std;


#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define read(x)     int x;cin>>x;
#define readll(x)   ll x;cin>>x;
#define readv(v,n)  vector<int> v(n);for(int i=0;i<n;i++) cin>>v[i];
#define readvll(v,n)  vector<ll> v(n);for(int i=0;i<n;i++) cin>>v[i];
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
map<int, int> mp;
void prime_fact(int x){
	for (int i = 2; i * i <= x; ++i) {
        while (x % i == 0) {
            mp[i]++;
            x /= i;
        }
    }
    if (x > 1) {
    	mp[x]++;
     }
}

void solve() 
{
  read(n);
  mp.clear();
  vector<int> a(n+1);
  for (int i = 0; i <n; i++)
  {
  	cin>>a[i];
  	prime_fact(a[i]);
  }
  for(auto &it: mp){
  	if(it.second%n!=0){
  		cout<<"NO\n";return;
  	}
  }
  yes
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