#include<bits/stdc++.h>
using namespace std;

int bitCount(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }

        map<int, vector<int>> group;
        for (int num : p) {
            int count = bitCount(num);
            group[count].push_back(num);
        }

        for (auto& [key, group] : group) {
            sort(group.begin(), group.end());
        }

        vector<int> sortedPermutation;
        for (int num : p) {
            int count = bitCount(num);
            sortedPermutation.push_back(group[count].front());
            group[count].erase(group[count].begin());
        }
       
        sort(p.begin(), p.end());
        if (sortedPermutation == p) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
