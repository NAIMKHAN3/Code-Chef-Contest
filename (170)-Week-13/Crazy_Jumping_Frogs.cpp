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

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int even = 0, odd = 0;
        for (int pos : v)
        {
            if (pos % 2 == 0)
                even++;
            else
                odd++;
        }

        cout << max(even, odd) << '\n';
    }

    return 0;
}
