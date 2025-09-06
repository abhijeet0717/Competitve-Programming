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
#define read(x)     int x;cin>>x;
#define readll(x)   ll x;cin>>x;
#define readv(v,n)  vector<int> v(n);for(int i=0;i<n;i++) cin>>v[i];
#define readvll(v,n)  vector<ll> v(n);for(int i=0;i<n;i++) cin>>v[i];


typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

//<<-----------------------------------INBUILT FUNCTIONS------------------------------------------------------------------------------------------------------------->>
bool isPrime(int n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowof2(int n){return (n && !(n&(n-1)));}
bool isPerfectSq(int n){ll root=sqrtl(n);return root*root==n;}
#define lcm(a,b) (a*(b/gcd(a,b)))
//<<------------------------------------------------------------------------------------------------------------------------------------------------>>



//----------------------------------DEBUG-------------------------------------------------------------------------------------------------------->>
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

//---------------------------------DEBUG----------------------------------------------------------------------------------------------->>

void solve() 
{
  int n,k,m;cin>>n>>k>>m;
  string s;cin>>s;
  map<int,int> mp;
  vector<vector<int>> v(26);
  for (int i = 0; i < m; i++)
  {
   mp[s[i]-97]++;
   v[s[i]-97].push_back(i);
  }
  bool flag(true);
  //debug(v);
  for(auto it: mp)
  {
   if (it.second<n)
   {
      flag=false;
      cout<<"NO\n";
      for (int i = 0; i < n; i++)
      {
         cout<<(char)(it.first+97);
      }
      cout<<endl;return;
   }
  }
  for (int i = 0; i < k; i++)
  {
   //bool cond1(true),cond2(true);
   for (int j = 0; j < k; j++)
   {
      ll last=v[j].size()-1;
      if (v[i][0]>v[j][last])
      {
         cout<<"NO\n";
         cout<<v[i][0]<<v[j][last];
         mp[v[i][0]]--;mp[v[j][0]]--;
         for (int l = 0; l < n-2; l++)
         {
            if (mp[l]>0)
            {
               cout<<(char)(97+l);
            }
         }
         cout<<endl;
         return;
      }
   }
   ll last=v[i].size()-1;
   for (int j = 0; j < k; j++)
   {
      if(v[i][last]<v[j][0]){
         cout<<"NO\n";
         mp[v[i][0]]--;mp[v[j][0]]--;
         for (int l = 0; l < n-2; l++)
         {
            if (mp[l]>0)
            {
               cout<<(char)(97+l);
            }
         }
         return;
      }
   }
  }
  cout<<"YES\n";

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


 