#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map<int, int> mp;

        for (int i = 1; i <= n; i++) {
            int day;
            cin >> day;
            mp[day] = max(mp[day], i);
        }

        long long ans = 0;

        for (auto m : mp) {
            ans += m.second;
        }

        cout << ans << endl;
    }

    return 0;
}
