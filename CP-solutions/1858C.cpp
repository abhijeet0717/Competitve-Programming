#include <bits/stdc++.h>
using namespace std;

typedef long long   ll;
#define umap        unordered_map
#define speed       ios_base::sync_with_stdio(false); cin.tie(NULL)
#define all(x)      x.begin(), x.end()
#define pb          push_back

const int MAX = 200007;
const int MOD = 1000000007;

int main()
{
    speed;
    int t;
    cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;
      vector<ll> v;
      for (int i = 1; i<=n; i+=2)
      {
        for (int j = i; j <= n; j*=2)
        {
          cout<<j<<" ";
        
        }
      }cout<<endl;
    }
    return 0;
}