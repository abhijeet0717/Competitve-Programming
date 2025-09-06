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
    int t,count(0);
    cin>>t;
    while(t--)
    {
      int a,b;
      cin>>a>>b;
      if ((b-a)>=2)
      {
      	count++;
      }
    }
    cout<<count;
    return 0;
}