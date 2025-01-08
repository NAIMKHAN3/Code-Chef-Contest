#include <bits/stdc++.h>
using namespace std;


int mn_cost(long long n, const vector<int>& a) {
    map<int, pair<int, int>> mp;
    for (int i = 0; i < n; i++) {
        if (mp.find(a[i]) == mp.end()) {
            mp[a[i]] = {i, i};
        } else {
            mp[a[i]].second = i;
        }
    }

    vector<pair<int, int>> v;

    for (auto i : mp) {
        int start = i.second.first;
        int end = i.second.second;
        
        if (start != end) {
            v.push_back({start, end});
        }
    }

    if (v.empty()) {
        return 0;
    }

    sort(v.begin(), v.end());

    vector<pair<int, int>> arr;
    int cr_idx = v[0].first;
    int cr_idx_e = v[0].second;

    for (int i = 1; i < v.size(); i++) {
        int start = v[i].first;
        int end = v[i].second;

        if (start <= cr_idx_e) {
            cr_idx_e = max(cr_idx_e, end);
        } else {
            arr.push_back({cr_idx, cr_idx_e});
            cr_idx = start;
            cr_idx_e = end;
        }
    }

    arr.push_back({cr_idx, cr_idx_e});

    int ans = 0;
    for (auto val : arr) {
        set<int> st;
        for (int i = val.first; i <= val.second; ++i) {
            st.insert(a[i]);
        }
        ans += st.size();
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << mn_cost(n, a) << endl;
    }

    return 0;
}
