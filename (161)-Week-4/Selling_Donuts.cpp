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
        int n, m;
        cin >> n >> m;
        vector<int> item(n);
        vector<int> person(m);
        for (int i = 0; i < n; i++)
        {
            cin >> item[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> person[i];
        }
        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            int x = person[i];
            if (x <= n )
            {
                if (item[x - 1] <= 0)
                {
                    ans++;
                }
                else
                {
                    item[x - 1]--;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}