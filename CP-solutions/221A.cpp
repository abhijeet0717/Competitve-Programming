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
    int t;cin>>t;
    while(t--)
    {
      string s;
      cin>>s;
      int flag(1);
      int len=s.size();
      for (int i = 0; i <len-1; i++)
      {
        if (s[i]==s[i+1])
        {
          flag=0;
        }
      }
      if (s=="()")
      {
        cout<<"NO"<<endl;
      }
      else if (flag)
      {
        cout<<"YES"<<endl;
          for (int i = 0; i < len; i++)
          {
            cout<<"(";
          }
          for (int i = 0; i < len; i++)
          {
            cout<<")";
          }cout<<endl;
      }
      else{
        cout<<"YES"<<endl;
        for (int i = 1; i <= len; i++)
        {
          cout<<"()";
        }cout<<endl;
      }

    }
    return 0;
}