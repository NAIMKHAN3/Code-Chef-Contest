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
        vector<long long> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        auto MaxStk = [&]()
        {
            int mxStk = 1, crStk = 1;
            for (int i = 1; i < n; i++)
            {
                if (v[i] >= v[i - 1])
                {
                    crStk++;
                    mxStk = max(mxStk, crStk);
                }
                else
                {
                    crStk = 1;
                }
            }
            return mxStk;
        };

        int mxStk = MaxStk();

        for (int i = 0; i < n; i++)
        {
            int org = v[i];
            v[i] = v[i] * x;

            mxStk = max(mxStk, MaxStk());

            v[i] = org;
        }

        cout << mxStk << endl;
    }

    return 0;
}
