#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MAX = 200007;
const int MOD = 1000000007;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
       int x,y,n;
       cin>>x>>y>>n;
       int diff=y-x;
       //cout<<diff<<"q"<<endl;
       int arr[n];
       arr[n-1]=y;
       arr[0]=x;
       int s=n-1,d(1);
       
       for (int i = n-2; i>=1; i--)
             {

                arr[i]=arr[i+1]-(d);++d;
                
             } 

             bool flag(true);
        for (int i = 0; i + 1 < n; ++i) {
            if (arr[i + 1] <= arr[i]) {
                flag = false;
            }
        }
        for (int i = 0; i + 2 < n; ++i) {
            int p = arr[i + 1] - arr[i];
            int q = arr[i + 2] - arr[i + 1];
            if (p <= q) {
                flag = false;
            }
        }
        if (!flag) {
            cout << "-1"<<endl;
            
        }
              else{
         for (int i = 0; i < n; i++)
             {
                cout<<arr[i]<<" ";
             }    cout<<endl;
          }
    }
    return 0;
}