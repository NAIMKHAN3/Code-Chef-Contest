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
        int n, k, p;
        cin >> n >> k >> p;

        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end(), greater<int>());

        int vdHeight = k + v[0];

        int vnHeight = p;
        for (int i = 1; i < n; ++i)
        {
            vnHeight += v[i];
        }
        if (vdHeight > vnHeight)
        {
            cout << "Ved" << endl;
        }
        else if (vnHeight > vdHeight)
        {
            cout << "Varun" << endl;
        }
        else
        {
            cout << "Equal" << endl;
        }
    }

    return 0;
}