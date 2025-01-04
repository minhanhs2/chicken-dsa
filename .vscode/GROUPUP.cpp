#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int T;
    cin >> T; 
    while (T--) {
        int n;
        cin >> n; 
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        ll total_time = 0;
 
        while (a.size() > 1) {
            vector<ll> next_a;
            ll max_time = 0;
 
            for (size_t i = 0; i < a.size(); i += 2) {
                if (i + 1 < a.size()) {
                    ll merge_time = max(a[i] + a[i + 1], a[i] + a[i + 1] - 1);
                    max_time = merge_time; 
                    next_a.push_back(merge_time);
                } else {
                    next_a.push_back(a[i]);
                }
            }
 
            total_time += max_time;
            a = next_a; 
        }
 
        cout << total_time << "\n";
    }
 
    return 0;
}
