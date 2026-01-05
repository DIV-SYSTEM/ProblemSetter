#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long K;
    cin >> n >> K;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int ans = 1;
    for (int i = 0; i < n; i++) {
        long long cost = 0;
        for (int j = i + 1; j < n; j++) {
            cost += llabs(a[j] - a[j - 1]);
            if (cost <= K)
                ans = max(ans, j - i + 1);
        }
    }
    cout << ans << "\n";
}
