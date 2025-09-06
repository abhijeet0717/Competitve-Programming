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
      int curr,count(0),ans(0);
      for (int i = 0; i < n; i++)
      {
      	cin>>curr;
      	if (curr==0)
      	{
      		count++;
      	}
      	else{
      		count=0;
      	}
      	ans=max(ans,count);
      }
      cout<<ans<<endl;
    }
    return 0;
}