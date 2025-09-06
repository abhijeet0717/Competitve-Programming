#include<bits/stdc++.h>


using namespace std;


#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define read(x)     int x;cin>>x;
#define readll(x)   ll x;cin>>x;
#define readv(v,n)  vector<int> v(n);for(int i=0;i<n;i++) cin>>v[i];
#define readvll(v,n)  vector<ll> v(n);for(int i=0;i<n;i++) cin>>v[i];


typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}



void solve() 
{
  int n;cin>>n;
  string a,b;cin>>a>>b;
  int l=0,r=n-1;
  for (int i = 0; i < n-1; i++)
  {
    if (a[i+1]=='0'&& b[i]=='1')
    {
      l=i+1;
    }
    if (a[i+1]=='1'&& b[i]=='0')
    {
      r=i;break;
    }
  }
  for (int i = 0; i <=l; i++)
  {
    cout<<a[i];
  }
  for (int i = l; i < n; i++)
  {
    cout<<b[i];
  }
  cout<<endl<<r-l+1<<endl;
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



  //int n;cin>>n;
  // string a,b;cin>>a>>b;
  // vector<int> v1(n),v2(n);
  // v1[0]=a[0];v2[n-1]=b[n-1];

  // for (int i = 1; i <n; i++)
  // {
  // 	v1[i]+=v1[i-1]+a[i];
  // }
  // for (int i = n-2; i >=0;i--)
  // {
  // 	v2[i]=v2[i+1]+b[i];
  // }
  // int anss=n+1;
  // int count(0);
  // for (int i = 0; i < n; i++)
  // {
  // 	if((v1[i]+v2[i])==anss) count++;
  // 	anss=min(anss,v1[i]+v2[i]);
  // 	if(anss>(v1[i]+v2[i])) count=0;
  // }
  // cout<<count<<endl;