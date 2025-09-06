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
    int T;
    cin>>T;
    while(T--)
    {
      int n,m;
      cin>>n>>m;
      string s,t;cin>>s>>t;
      bool flag_t(true);
      for (int i = 0; i < m; i++)
      {
      	if (t[i]==t[i-1])
      	{
      		flag_t=false;
      	}
      }
      bool flag(true);
      for (int i = 1; i < n; i++)
      {
      	if (s[i]==s[i-1])
      	{
      		if (s[i-1]==t[0] || s[i]==t[m-1] || (!flag_t))
      		{
      			flag=false;
      		}
      	}
      }
      if (flag)
      {
      	cout<<"Yes\n";
      }
      else{
      	cout<<"No\n";
      }
    }
    return 0;
}