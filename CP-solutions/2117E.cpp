#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n+1), b(n+1);
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= n; i++) cin >> b[i];

        // 1) No-removal case: find the rightmost index k (1≤k≤n) 
        //    where you can create a match using only positions k and k+1.
        int bestNoRem = 0;
        for(int k = n; k >= 1; --k) {
            bool canSeed = false;
            // existing match
            if (a[k] == b[k]) {
                canSeed = true;
            }
            // adjacent-value matches at k+1
            if (k < n) {
                if (a[k] == a[k+1] ||
                    a[k] == b[k+1] ||
                    b[k] == a[k+1] ||
                    b[k] == b[k+1]) {
                    canSeed = true;
                }
            }
            if (canSeed) {
                bestNoRem = k;
                break;  // rightmost such k
            }
        }

        // 2) With-removal case: try “removing” (a[j+1],b[j+1]) to bridge to j+2.
        //    Track all values in suffix [j+2..n] in a hash-set.
        int bestWithRem = 0;
        unordered_set<int> seen;
        // start from the very end:
        // for j = n-1, removal of (n) would expose suffix [n+1..n] = empty,
        // so no new seed there; we begin adding from index n back to j+2.
        seen.reserve(n*2);
        for (int idx = n; idx >= 1; --idx) {
            // add both a[idx], b[idx] into seen before we check j = idx-2
            seen.insert(a[idx]);
            seen.insert(b[idx]);

            int j = idx - 2;
            if (j >= 1) {
                // can we seed at j by bridging over j+1 to something in [j+2..n]?
                if (seen.count(a[j]) || seen.count(b[j])) {
                    bestWithRem = j;
                    break;  // this is the rightmost j
                }
            }
        }

        // The total matches you can get is exactly the seed position:
        // you can propagate that match all the way to index 1 → that many matches.
        int answer = max(bestNoRem, bestWithRem);
        cout << answer << "\n";
    }

    return 0;
}
