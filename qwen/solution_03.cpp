#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long K;
    cin >> n >> K;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    long long cost = 0;
    int l = 0, ans = 0;

    for (int r = 1; r < n; r++) {
        cost += llabs(a[r] - a[r - 1]);
        while (cost >= K) {
            cost -= llabs(a[l + 1] - a[l]);
            l++;
        }
        ans = max(ans, r - l); // BUG
    }
    cout << ans << "\n";
}
