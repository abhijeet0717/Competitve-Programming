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

char f(string s){
	for( char i='a';i<'a'+24;i++){
		if (s.find(i) == string::npos)
			return i;
	}
}

void solve() 
{
  string s;cin>>s;
  int n=s.length();
  bool done(false);
  cout<<s[0];
  for (int i = 1; i < n; ++i)
  {
  	
  	if(s[i]==s[i-1] and done==false){
  		done=true;
  		cout<<f(s);
  	}
  	cout<<s[i];
  }
  if(done==false){
  	cout<<f(s);
  }
  cout<<endl;return;
  // vector<char> ans;
  // if(n==1){
  // 	ans.push_back(s[i]);
  // 	ans.push_back(f(s));
  // }
  // else{
  // 	for (int i = 0; i < s.length(); ++i)
  // 	{
  // 		if (s[i]==s[i+1])
  // 		{
  // 			/* code */
  // 		}
 // 	}
  // }
  
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