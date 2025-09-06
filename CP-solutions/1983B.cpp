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
  vector<string> grid1,grid2;
  for (int i = 0; i < n; i++)
  {
  	string s;
  	cin>>s;
  	grid1.push_back(s);
  }
  for (int i = 0; i < n; i++)
  {
  	string s;
  	cin>>s;
  	grid2.push_back(s);
  }
  
  vector<int> r_sum1(m,0),r_sum2(m,0),c_sum1(n,0),c_sum2(n,0);
  for (int i = 0; i < n; ++i)
  {
  	for (int j = 0; j < m; ++j)
  	{
  		int a=(int)grid1[i][j]-'0',b=(int)grid2[i][j]-'0';
  		r_sum1[j]=(r_sum1[j]+a)%3;
  		c_sum1[i]=(c_sum1[i]+a)%3;
  		r_sum2[j]=(r_sum2[j]+b)%3;
  		c_sum2[i]=(c_sum2[i]+b)%3;
  	}
  }
  for (int i = 0; i < m; i++)
  {
  	if(r_sum1[i]!=r_sum2[i]){
  		cout<<"NO\n";return;
  	}
  }
  for (int i = 0; i < n; i++)
  {
  	if(c_sum1[i]!=c_sum2[i]){
  		cout<<"NO\n";return;
  	}
  }
  cout<<"YES\n";return;
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