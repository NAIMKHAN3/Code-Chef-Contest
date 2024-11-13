#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        int ans = 10 * n;
        int ans2 = 12 * n;
        if (k >= ans && k <= ans2){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}