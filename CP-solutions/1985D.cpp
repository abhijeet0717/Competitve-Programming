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

void solve() 
{
  int n,m;cin>>n>>m;
  char arr[n][m];
  int l(m),r(0),u(0),d(n);
  for (int i = 0; i < n; i++)
  {
  	for (int j = 0; j < m; j++)
  	{
  		cin>>arr[i][j];
  	}
  }
  for (int i = 0; i < n; i++)
  {
  	for (int j = 0; j < m; j++)
  	{
  		char x=arr[i][j],y='#';
  		if(x==y){
  			//cout<<"hi";
  			u=max(u,i);
  			d=min(d,i);
  			l=min(l,j);
  			r=max(r,j);
  		}
  		//cout<<"hi";
  	}
  }
  debug(u);debug(d);debug(l);debug(r);
  int width=(r-l)/2;
  int h=(u-d)/2;
  debug(h);debug(width);
  cout<<d+1+h<<" "<<l+1+width<<endl;return;
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