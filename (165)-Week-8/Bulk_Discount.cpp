#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> v(n);
        long long totalCost = 0;

        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        

        for (int i = 0; i < n; ++i) {
            totalCost += max(0, v[i] - i);
        }
        cout << totalCost << endl;
    }
    return 0;
}