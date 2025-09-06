#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MAX = 200007;
const int MOD = 1000000007;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
      int r,c;
      cin>>r>>c;
      char st[r][c];
      int flag(0);
      for (int i = 0; i < r; ++i)
      {
         for (int j = 0; j < c; ++j)
         {
            cin>>st[i][j];
         }
         
      }
      string s="vika";
      int k(0);
      for (int i = 0; i < c; ++i)
      {
         for (int j = 0; j < r; ++j)
         {
            if (st[j][i]==s[k])
            {
               flag++;k++;break;
            }
            if (flag==4 && k==4)
            {
               break;
            }
         }
      }
      
      if (flag==4)
      {
         cout<<"YES"<<endl;
      }
      else{
         cout<<"NO"<<endl;
      }
    }
    return 0;
}
