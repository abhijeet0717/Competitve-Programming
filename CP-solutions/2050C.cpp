#include<bits/stdc++.h>


using namespace std;


#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define read(x)     int x;cin>>x;
#define readll(x)   ll x;cin>>x;
#define readv(v,n)  vector<int> v(n);for(int i=0;i<n;i++) cin>>v[i];
#define readvll(v,n)  vector<ll> v(n);for(int i=0;i<n;i++) cin>>v[i];
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
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

void solve(){
	string s;cin>>s;
	ll two=0,three=0,sum=0;
	for(char &c: s){
		if(c=='2') two++;
		else if(c=='3') three++;
		sum+=c-'0';
	}

	loop(0,two+1){
		loopj(0,three+1){
			if((sum + 2*i +6*j)%9 ==0){yes;return;}
		}
	}
	// debug(sum%9,two,three);
	// if(sum == 0){
	// 	if(two>0){
	// 		if(2*three>=two and (two>1 and three>0)){yes;return;}

	// 	}
	// 	else if(three>0){yes;return;}		
	// }
	// if(sum%2 != 0){
	// 	if(sum<5 and two>=2){
	// 		yes;return;
	// 	}
	// 	else if(sum>=5 and two>0){
	// 		yes;return;
	// 	}
	// }
	// else if(sum!=0 and sum%2 == 0 ){
	// 	if(sum<6 and (two>0 and three>0)){
	// 		yes;return;
	// 	}
	// 	if(sum==6 and 2*three>=two){
	// 		yes;return;
	// 	}
	// 	if(sum==8 and (two>=3 or (three>1 and two>0 ))){
	// 		yes;return;
	// 	}
	// }
	no;return;
}

signed main() {
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


void solve_tle() 
{
  string s;cin>>s;
  int n=s.length();
  set<string> st;
  vector<vector<string>> adj(n);
  loop(0,n){
  	char c=s[i];
  	if(s[i]=='2' or s[i]=='3'){
  		if(i==0){
  			string curr="";curr+=c;
  			adj[0].push_back(curr);
  			curr="";curr+='0'+((c-'0')*(c-'0'));
  			adj[0].push_back(curr);
  		}
  		else{
  			for(auto &it: adj[i-1]){
  				string curr=it;curr+=c;
  				adj[i].push_back(curr);
  				curr=it;curr+='0'+((c-'0')*(c-'0'));
  				adj[i].push_back(curr);
  			}
  		}
  	}
  	else{
  		if(i==0){
  			string curr="";curr+=c;
  			adj[0].push_back(curr);
  		}
  		else{
  			for(auto &it: adj[i-1]){
  				string curr=it;curr+=c;
  				adj[i].push_back(curr);
  			}
  		}
  	}
  }
  for(auto &it: adj[n-1]){
  	string curr=it;
  	ll sum=0;
  	for(char &c:it){
  		sum+=c-'0';
  	}
  	if(sum%9 == 0) {yes;return;}
  }
  no;return;
  // debug(adj);
}