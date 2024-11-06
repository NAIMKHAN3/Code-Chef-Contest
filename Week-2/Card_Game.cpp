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
        vector<int> even;
        vector<int> odd;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                even.push_back(i);
            }
            else
            {
                odd.push_back(i);
            }
        }
        if (x % 2 == 0)
        {
            if (even.size() < 2)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << even.size()-1 << endl;
            }
        }
        else
        {
            if (odd.size() < 2)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << odd.size()-1 << endl;
            }
        }
    }
    return 0;
}