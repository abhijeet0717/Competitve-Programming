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
      int a[4];
      for (int i = 0; i < 4;i++)
      {
      	a[3-i]=n%(10);
        n/=10;
        int x(0);
      	if (a[3-i]==x)
      	{
      		a[3-i]+=10;
      	}
      }
      int count(4);
      count+=abs(a[0]-1);
      for (int i = 0; i < 3; i++)
      {
      	count+=abs(a[i+1]-a[i]);
      }
      cout<<count<<endl;
    }
    return 0;
}