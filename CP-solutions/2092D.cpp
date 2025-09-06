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
#define print(arr) for(auto &it:arr){cout<<it<<" ";}cout<<endl;


typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#ifndef ONLINE_JUDGE
  #include "debug.h" 
#else
  #define debug(x...)
#endif

char findchar(char a,char b){
  string X="LIT";
  for(char it:X){
    if(it !=a and it!=b) return it;
  }
  return ' ';
}

void solve() 
{
  int n;cin>>n;
  string s;cin>>s;
  int T=0,L=0,I=0;
  map<char, int> cnt;
  for(char c:s){
    cnt[c]++;
  }
  if(n==1) {cout<<-1<<endl;return;}
  if(cnt['L'] == cnt['I'] and cnt['L']==cnt['T']){cout<<0<<endl;return;}
  
  int moves=-1,each_cnt=-1;
  loop(0,2*n+1){
    if((n+i)%3 == 0){
      int each = (n+i)/3;
      if(each >= cnt['L'] && each >= cnt['I'] && each >= cnt['T']){
        each_cnt=each;moves=i;
      }
    }
  }
  vector<int> operations;
  
  loopj(0,moves){
    bool op_possible=false;
    loop(1,s.size()){
      
      if(s[i-1] == s[i]) continue;
      char c = findchar(s[i-1],s[i]);
      if(cnt[c]<each_cnt){
        operations.push_back(i);
        op_possible=true;
        s.insert(s.begin()+i,c);
        cnt[c]++;
        break;
      }
    }
    if(!op_possible) break;
  }

  debug(cnt);
  if(cnt['L']==each_cnt and cnt['I']==each_cnt and cnt['T']==each_cnt){
    cout<<operations.size()<<endl;
    for(auto &it: operations){
      cout<<it<<endl;
    }
  }
  else{
    cout<<-1<<endl;return;
  }
  return;
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