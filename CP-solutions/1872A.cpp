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
      float a,b,c,count(0);
      cin>>a>>b>>c;
      float diff=abs(a-b);
      count=ceil(diff/(2*c));
      cout<<count<<endl;
    }
    return 0;
}