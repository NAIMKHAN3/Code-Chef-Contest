#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int h, l, w;
        cin >> h >> l >> w;
        long long tA = 2 * (h * l + l * w + w * h);

        int ans = 1000 / tA;

        cout << ans << endl;
    }

    return 0;
}
