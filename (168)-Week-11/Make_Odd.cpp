#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;
        int bothOneCount = 0;
        int oneCount = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1' && b[i] == '1')
            {
                bothOneCount++;
            }
            else if (a[i] == '1' || b[i] == '1')
            {
                oneCount++;
            }
        }

        if (bothOneCount % 2 == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (oneCount > 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}