#include <bits/stdc++.h>
using namespace std;

typedef long long   ll;
#define umap        unordered_map
#define speed       ios_base::sync_with_stdio(false); cin.tie(NULL)
#define all(x)      x.begin(), x.end()
#define pb          push_back

int main()
{
    speed;
    int t;
    cin>>t;
    while(t--)
    {
      int n;cin>>n;
      vector<int> v(2*n);
      for (int i = 0; i < 2*n; i++)
      {
          cin>>v[i];
      }
      sort(all(v));int path(0);
      for (int i = 1; i < n; i++)
      {
          path+=(v[i]-v[i-1])+(v[n+i]-v[n+i-1]);
      }
      cout<<path<<endl;
      for (int i = 0; i < n; i++)
      {
          cout<<v[n+i]<<" "<<v[i]<<endl;
      }
    }
    return 0;
}