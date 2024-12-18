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
        vector<int> lastArray(n);
        vector<int> currentArray(n);
        lastArray[n - 1] = v[n - 1];
        currentArray[n - 1] = 0;
        int ans = 0;

        for (int i = n - 2; i >= 0; i--)
        {
            lastArray[i] = max(lastArray[i + 1], v[i]);
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (v[i] == lastArray[i])
                currentArray[i] = 0;
            else
                currentArray[i] = currentArray[i + 1] + 1;
        }

        for (int i = 0; i < n; i++)
        {
            ans = max(ans, currentArray[i]);
        }
        cout << ans << endl;
    }
    return 0;
}