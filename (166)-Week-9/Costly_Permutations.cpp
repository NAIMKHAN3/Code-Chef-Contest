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

        vector<int> p(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> p[i];
            p[i]--;
        }

        vector<bool> v(n, false);
        priority_queue<int, vector<int>, greater<int>> c;

        for (int i = 0; i < n; i++)
        {
            if (!v[i])
            {
                int l = 0, idx = i;
                while (v[idx] == false)
                {
                    v[idx] = true;
                    l++;
                    idx = p[idx];
                }
                c.push(l);
            }
        }

        if (c.size() == 1)
        {
            cout << "0" << endl;
            continue;
        }

        long long ans = 0;

        while (c.size() > 1)
        {
            int s = c.top();
            c.pop();
            int t = c.top();
            c.pop();

            int m = s + t;
            ans += m;
            c.push(m);
        }

        cout << ans << endl;
    }

    return 0;
}