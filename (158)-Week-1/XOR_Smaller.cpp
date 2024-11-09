#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        int count = 0;

    for (int i = 0; i < 30; i++)
    {
        int sum = pow(2, i);
        bool valid = true;

        for (int j = 0; j < n; j++)
        {
            if ((v[j] & sum) == 0)
            {
                valid = false;
                break;
            }
        }

        if (valid)
        {
            count += sum;
        }
    }
        cout << count << endl;
    }

    return 0;
}
