#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        int ans = sum / x;
        if (sum % x != 0) {
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
