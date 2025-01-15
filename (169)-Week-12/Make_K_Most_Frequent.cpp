#include <bits/stdc++.h>
using namespace std;

int getMaxFrequent(const vector<int>& v, map<int, int>& mp) {
    int mx = 0;
    for (int num : v) {
        mp[num]++;
        mx = max(mx, mp[num]);
    }
    return mx;
}

bool isMakeMostKFrequent(const vector<int>& v, int k) {
    map<int, int> mp;
    int mx = 0;
    for (int i = 0; i < v.size(); ++i) {
        mp[v[i]]++;
        mx = max(mx, mp[v[i]]);
        if (mx == mp[k]) {
            return true;
        }
    }

    mp.clear();
    mx = 0;
    for (int i = v.size() - 1; i >= 0; --i) {
        mp[v[i]]++;
        mx = max(mx, mp[v[i]]);
        if (mx == mp[k]) {
            return true;
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        map<int, int> mp;
        int mx = getMaxFrequent(v, mp);

        if (mp[k] == mx) {
            cout << 0 << endl;
            continue;
        }

        if (isMakeMostKFrequent(v, k)) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }

    return 0;
}
