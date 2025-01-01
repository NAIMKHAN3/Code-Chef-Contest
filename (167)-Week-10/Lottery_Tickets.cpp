#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int R = 1e6;
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int chef = v[0];
        sort(v.begin(), v.end());

        if (chef == v[0]) {
            cout << chef + (v[1] - chef) / 2 << endl;
        } else if (chef == v[n - 1]) {
            cout << R - chef + 1 + (chef - v[n - 2]) / 2 << endl;
        } else {
            int pos = lower_bound(v.begin(), v.end(), chef) - v.begin();
            int a = chef - (chef - v[pos - 1]) / 2;
            int b = chef + (v[pos + 1] - chef) / 2;
            cout << b - a + 1 << endl;
        }
    }

    return 0;
}
