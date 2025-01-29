#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string ptr[6] = {"RGB", "GRB", "RBG", "BGR", "GBR", "BRG"};
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string str;
        cin >> n >> str;
        int ans = n;

        for (string p : ptr)
        {
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                if (str[i] != p[i % 3])
                {
                    count++;
                }
            }
            ans = min(ans, count);
        }

        cout << ans << endl;
    }

    return 0;
}