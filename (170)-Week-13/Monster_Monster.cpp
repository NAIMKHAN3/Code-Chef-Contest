#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> health(n);
        for (int i = 0; i < n; i++) {
            cin >> health[i];
        }

        sort(health.begin(), health.end());

        long long ans = 0;
        for (int i = 0; i < n; i++) {
            long long hp = health[i] + 1LL * (n - i - 1) * x;
            ans = max(ans, hp);
        }

        cout << ans << '\n';
    }

    return 0;
}
