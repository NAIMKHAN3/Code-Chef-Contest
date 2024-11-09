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
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        vector<int> b(n);
        vector<int> diffrent;
        int winA = 0, winB = (n / 2) + 1;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                winA++;
            }
            else
            {
                diffrent.push_back(b[i] - a[i] + 1);
            }
        }

        sort(diffrent.begin(), diffrent.end());

        for (int i = 0; i < diffrent.size(); i++)
        {
            if (x >= diffrent[i])
            {
                x -= diffrent[i];
                winA++;
                if (winA > winB)
                    break;
            }
            else
                break;
        }

        if (winA >= winB)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
