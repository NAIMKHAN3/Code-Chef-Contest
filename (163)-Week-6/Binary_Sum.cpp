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
        int n, k;
        cin >> n >> k;

        int ans;
        if (n % 2 == 0)
        {

            ans = n / 2;
        }
        else
        {

            ans = (n / 2) + 1;
        }

        
        if (k == ans || (ans -1 == k))
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
