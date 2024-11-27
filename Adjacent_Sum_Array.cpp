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
        vector<long long> b(n - 1);
        vector<long long> a(n);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> b[i];
        }
        a[0] = b[0] - b[n - 2] + b[1];
        a[0] /= 2;
        a[1] = b[0] - a[0];
        for (int i = 1; i < n - 1; i++)
        {

            if (i == 0)
            {
                a[i] = b[i] / 2;
                a[i + 1] = b[i] - a[i];
            }
            else
            {
                a[i + 1] = b[i] - a[i];
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] > 0)
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}