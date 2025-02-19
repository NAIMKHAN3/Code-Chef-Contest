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
        int n, pair = 0, zero = 0;
        cin >> n;
        vector<int> freq(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            freq[x]++;
        }
        for (int x = 1; x <= n; x++)
        {
            pair += (freq[x] % 2);
            zero += (freq[x] / 2);
        }

        int z = freq[0];
        int count = z + zero;
        int f = (count > 0 ? 1 : 0);
        int ans = pair + f;

        cout << ans << "\n";
    }

    return 0;
}
