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
        string str;
        cin >> str;
        string a = "ADVITIYA";
        int ans = 0;

        for (int i = 0; i < 8; i++)
        {
            int d = (a[i] - str[i] + 26) % 26;
            ans += d;
        }
        cout << ans << "\n";
    }
    return 0;
}