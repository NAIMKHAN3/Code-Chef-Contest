#include <bits/stdc++.h>
using namespace std;
;
void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    set<int> st;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        st.insert(v[i]);
    }

    map<int, int> mp;
    for (int a : v) {
        mp[a]++;
        if (mp[a] > 1) {
            cout << "1\n" << a << "\n";
            return;
        }
    }

    cout << "-1\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
