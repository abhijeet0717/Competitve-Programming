#include <bits/stdc++.h>
#define ll          long long
#define all(x)      x.begin(), x.end()
#define speed       ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0)

using namespace std;


void solve() 
{ 
   int n;cin>>n;
   int arr[n];int count(0),three(0),two(0),one(0);
   for (int i = 0; i < n; i++)
   {
       cin>>arr[i];
       if (arr[i]==4)
       {
           count++;
       }
       else if (arr[i]==3)
       {
           three++;
       }
       else if (arr[i]==2)
       {
           two++;
       }
       else if (arr[i]==1)
       {
           one++;
       }
   }
       count+=min(three,one);
       three-=min(three,one);
       one-=min(three,one);
       count+=(two)/2;
       count+=min(two%2,one);one-=min(two%2,one);
       count+=(one+3)/4;
       cout<<count;
   
   
}


int main()
{
    speed;
    int t;
    t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}
