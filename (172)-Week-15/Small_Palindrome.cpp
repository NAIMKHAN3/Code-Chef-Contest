#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        string ans = "";

        for (int i = 0; i < x / 2; i++) {
            ans += '1';
        }
        for (int i = 0; i < y / 2; i++) {
            ans += '2';
        }
        for (int i = 0; i < y / 2; i++) {
            ans += '2';
        }
        for (int i = 0; i < x / 2; i++) {
            ans += '1';
        }

        cout << ans << endl;
    }
    return 0;
}
