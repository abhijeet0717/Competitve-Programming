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
      int x[n];
      for (int i = 0; i < n; i++)
      {
      	cin>>x[i];
      }
      sort(x,x+n);
      if(x[0]==0) x[0]+=1;
      else {
      	x[n-1]+=1;
      }
      ll ans(1);
      for (int i = 0; i < n; i++)
      {
      	ans*=x[i];
      }
      cout<<ans<<endl;
    }
    return 0;
}