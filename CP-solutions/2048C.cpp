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

void solve() 
{
  string s;cin>>s;
  int n=s.length();
  int l2=1,r2=n,l1=0,r1=0;
  loop(0,n){
  	if(s[i]=='0'){
  		l1=i+1;break;
  	}
  }

  string req=s.substr(l1,n-1);
  for(char c: req){
  	if(c=='0') c='1';
  	else c='0';
  }

  int size=n-l1;
  loop(0,l1){
  	string temp=s.substr(i,i+size);
  	if(temp[0]=='1'){

  	}
  }

  int max_xor=0;
  loop(0,size){
  	string temp="";
  	if(req[i]==s1[i]) temp+='0';
  	else temp+='1';
  }
  int t=stoi(temp);
  if(t>max_xor){
  	max_xor=t;
  	l1=l;r1=r;
  }
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



// string s; cin >> s;
  // int n = s.size();
  // int idx = -1;
  // for(int i = 0; i < n; ++i){
  //     if(s[i] == '0'){
  //         idx = i;
  //         break;
  //     }
  // }
  // if(idx == -1){
  //     cout << 1 << " " << n << " " << 1 << " " << 1 << endl;
  //     return ;
  // }
  // int window_size = n - idx;
  // map<string,pair<int,int>>mp;
  // for(int i = 0; i <= n - window_size; ++i){
  //     string curr = s.substr(i, window_size);
  //     if(mp.find(curr) == mp.end()){
  //         mp[curr] = {i, i + window_size - 1};
  //     }
  // }
  // string req=s.substr(idx,n-1);
  // for(char c: req){
  // 	if(c=='0') c='1';
  // 	else c='0';
  // }

  // for(auto &it: mp){
  // 	string s1=it.first;
  // 	int l=it.second.first;
  // 	int r=it.second.second;

  // 	loop(0,window_size){
  // 	string temp="";
  // 	if(req[i]==s1[i]) temp+='0';
  // 	else temp+='1';
  // 	}
  // 	int t=stoi(temp);
  // 	if(t>max_xor){
  // 		max_xor=t;
  // 		l1=l;r1=r;
  // 	}
  // }