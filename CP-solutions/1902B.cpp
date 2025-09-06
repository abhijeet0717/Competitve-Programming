#include<bits/stdc++.h>
using namespace std;


#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define delb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()



typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key



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

//       BINARY SEARCH
/*ll n,P,l,tt,days;
bool check(ll k){
   ll points_possible= k*l+min(days,k*2)*tt;
   if (points_possible>=P)
   {
      return true;
   }
   return false;
}

void solve() 
 {
  days=(n+6)/7;
  cin>>n>>P>>l>>tt;
  int low(0),high(n);
  ll mid;
  while(high-low>1){
   mid=(high+low)/2;
   if (check(mid))
   {
      high=mid;
   }
   else{
      low=mid;
   }
  }
  debug(high);
   cout<<n-high<<endl;*/
ll calc(ll k,ll n,ll l, ll tt,ll week)
{
    return (k*l+min(week,2*k)*tt);
}
 
void solve() {
ll n,p,l,tt;
cin>>n>>p>>l>>tt;
ll week=(n+6)/7;
ll lo=0;
ll hi=n;
while(hi-lo>1)
{
    ll mid=(hi+lo)/2;
    if(calc(mid,n,l,tt,week)>=p)
    {
        hi=mid;
    }
    else
    {
        lo=mid;
    }
}
 
cout<<n-hi<<endl;
   return;
}

int main() {
#ifndef ONLINE_JUDGE
   freopen("Error.txt", "w", stderr);
#endif
   fastio();
   int TT;
    //TT=1;
    cin>>TT;
    while(TT--) solve();
    return 0;

}





















// MY APPROACH
/*
ll count(0);
 ll n,P,l,t;cin>>n>>P>>l>>t;
 ll tasks_op=(n-1)/7+1;
 ll days_with_2task=tasks_op/2;
 ll days_with_1task=tasks_op%2;
 for (int i = 0; i < days_with_2task; ++i)
 {
    if (P-(2*(2*t+l))<=0)
    {
       count++;
       cout<<count<<endl;
       return;
    }
    else{
      P-((2*t+l));
      count++;
    }
 }
 for (int i = 0; i < days_with_1task; ++i)
 {
    if (P-((t+l))<=0)
    {
       count++;
       cout<<count<<endl;
       return ;
    }
    else{
      P-((t+l));
      count++;
    }
 }
 count+=(P+1)/l;
 cout<<count<<endl;
 return;

*/

