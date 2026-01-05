#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long K;
    cin >> n >> K;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    long long cost = 0;
    int l = 0, ans = 1;

    for (int r = 1; r < n; r++) {
        cost += abs(a[r] - a[r - 1]);
        if (cost > K) {
            cost = 0;
            l = r;
        }
        ans = max(ans, r - l + 1);
    }
    cout << ans << "\n";
}
