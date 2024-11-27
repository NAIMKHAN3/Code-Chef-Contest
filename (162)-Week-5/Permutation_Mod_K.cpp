#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            v[i] = i +1;
        }
        
        bool flag = false;
        
        for (int j = 1; j < n; ++j) {
            bool valid = true;
            for (int i = 0; i < n; ++i) {
                int index = (i + j) % n;
                if (v[index] % k == (i + 1) % k) {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                flag = true;
                for (int i = 0; i < n; ++i) {
                    cout << v[(i + j) % n] << " ";
                }
                cout << endl;
                break;
            }
        }

        if (!flag) {
            cout << -1 << endl;
        }
    }
    
    return 0;
}
