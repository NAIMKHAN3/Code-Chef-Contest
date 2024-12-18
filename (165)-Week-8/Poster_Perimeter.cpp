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
        int n, m, k;
        cin >> n >> m >> k;

        int difference = INT_MAX;

        for (int l = 1; l <= n; l++)
        {
            for (int w = 1; w <= m; w++)
            {
                int ans = 2 * (l + w);
                int diff = abs(ans - k);
                difference = min(difference, diff);
            }
        }

        cout << difference << endl;
    }
    return 0;
}