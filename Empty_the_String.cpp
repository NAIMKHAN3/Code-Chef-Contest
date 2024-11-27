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
        string s;
        cin >> s;

        bool flag = false;
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                continue;
            }
            else
            {
                flag = true;
                ans++;
            }
        }
        if (flag)
        {
            cout << ans + 1 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
}
