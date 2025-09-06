#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<ll, ll>> pts(n);
        vector<ll> xs(n), ys(n);

        for (int i = 0; i < n; i++) {
            cin >> pts[i].first >> pts[i].second;
            xs[i] = pts[i].first;
            ys[i] = pts[i].second;
        }

        if (n == 1) {
            cout << 1 << '\n';
            continue;
        }

        vector<ll> xs_sorted = xs;
        vector<ll> ys_sorted = ys;
        sort(xs_sorted.begin(), xs_sorted.end());
        sort(ys_sorted.begin(), ys_sorted.end());

        ll x1 = xs_sorted.front();
        ll x2 = xs_sorted.back();
        ll cnt_x1 = count(xs_sorted.begin(), xs_sorted.end(), x1);
        ll cnt_x2 = count(xs_sorted.begin(), xs_sorted.end(), x2);

        ll x1_2;
        if (cnt_x1 > 1) {
            x1_2 = x1;
        } else {
            x1_2 = xs_sorted[cnt_x1];
        }

        ll x2_2;
        if (cnt_x2 > 1) {
            x2_2 = x2;
        } else {
            x2_2 = xs_sorted[n - cnt_x2 - 1];
        }

        ll y1 = ys_sorted.front();
        ll y2 = ys_sorted.back();
        ll cnt_y1 = count(ys_sorted.begin(), ys_sorted.end(), y1);
        ll cnt_y2 = count(ys_sorted.begin(), ys_sorted.end(), y2);

        ll y1_2;
        if (cnt_y1 > 1) {
            y1_2 = y1;
        } else {
            y1_2 = ys_sorted[cnt_y1];
        }

        ll y2_2;
        if (cnt_y2 > 1) {
            y2_2 = y2;
        } else {
            y2_2 = ys_sorted[n - cnt_y2 - 1];
        }

        ll best = (x2 - x1 + 1) * (y2 - y1 + 1);

        for (int i = 0; i < n; i++) {
            ll xi = pts[i].first;
            ll yi = pts[i].second;

            ll xmin_rem, xmax_rem, ymin_rem, ymax_rem;

            if (xi == x1 && cnt_x1 == 1) {
                xmin_rem = x1_2;
            } else {
                xmin_rem = x1;
            }

            if (xi == x2 && cnt_x2 == 1) {
                xmax_rem = x2_2;
            } else {
                xmax_rem = x2;
            }

            if (yi == y1 && cnt_y1 == 1) {
                ymin_rem = y1_2;
            } else {
                ymin_rem = y1;
            }

            if (yi == y2 && cnt_y2 == 1) {
                ymax_rem = y2_2;
            } else {
                ymax_rem = y2;
            }

            ll width = xmax_rem - xmin_rem + 1;
            ll height = ymax_rem - ymin_rem + 1;
            ll area = width * height;

            if (area == n - 1) {
                area++;
            }

            if (area < best) {
                best = area;
            }
        }

        cout << best << '\n';
    }

    return 0;
}
