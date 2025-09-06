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
      ll n;cin>>n;
      cout<<int(sqrtl(n-1))<<endl;
    }
    return 0;
}