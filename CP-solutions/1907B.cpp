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


void solve() 
{
 string s;cin>>s;
 vector<int> upper,lower;
 for (int i = 0; i < s.size(); i++)
 {
 	if (s[i]=='b')
      {
          if (lower.size()!=0)
          {
              lower.pop_back();
          }
      }
      else if (s[i]=='B')
      {
          if (upper.size()!=0)
          {
              upper.pop_back();
          }
      }
 	else if (s[i]>=97 && s[i]<=122 )
 	{
 		lower.push_back(i);
 	}
 	else if (s[i]>=65 && s[i]<=90 )
 	{
 		upper.push_back(i);
 	}
 }
 debug(upper);debug(lower);
 int i = 0, j = 0;
    while (i < upper.size() || j < lower.size()) {
        if (i < upper.size() && (j == lower.size() || upper[i] < lower[j])) {
            cout << s[upper[i++]];
        } else {
            cout << s[lower[j++]];
        }
    }
//  int pu(0),pl(0);
//  while(pu < upper.size() || pl< lower.size())
//  {
//  	if (pu<upper.size()&& (pl==lower.size() || upper[pu]<lower[pl]))
//  	{
//  		cout<<s[upper[pu++]];
//  	}
//  	else 
//  	{
//  		cout<<s[lower[pl++]]; 	}
 
 cout<<endl;
}


int main() {
#ifndef ONLINE_JUDGE
   freopen("Error.txt", "w", stderr);
#endif
   fastio();
   int TT;
    //TT=1;
    cin>>TT;
    while(TT--){
      //debug(TT); 
      solve();
   }
    return 0;

}

