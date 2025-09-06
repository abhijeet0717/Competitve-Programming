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
      string s;cin>>s;
      string x="codeforces";
      int count(0);
      for (int i = 0; i < x.size(); ++i)
      {
      	if (s[i]!=x[i])
      	{
      		count++;
      	}
      }
      cout<<count<<endl;
    }
    return 0;
}