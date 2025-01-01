#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0) {
                for (int j = 1; j <= n; j++) {
                    cout << j << " ";
                }
            } else {
                for (int j = n; j >= 1; j--) {
                    cout << j << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}