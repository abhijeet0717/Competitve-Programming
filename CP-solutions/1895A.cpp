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
      int x,y,k;
      cin>>x>>y>>k;
      int ans=y+(max(0,(y-x-k)));
      if (x>y)
      {
        cout<<x<<endl;
      }
      else{
      cout<<ans<<"\n";}
    }
    return 0;
}