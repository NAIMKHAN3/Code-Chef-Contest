#include <bits/stdc++.h>
using namespace std;

int count(const string &s)
{
    return count(s.begin(), s.end(), '1');
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<string> v(3);
        vector<int> a(3);

        for (int i = 0; i < 3; i++)
        {
            cin >> v[i];
            a[i] = count(v[i]);
        }

        int t = a[0] + a[1] + a[2];

        if (t == 0 || t == 3 * n)
        {
            cout << "0\n";
        }
        else if (t == n)
        {
            cout << (n - *max_element(a.begin(), a.end())) << "\n";
        }
        else if (t == 2 * n)
        {
            cout << *min_element(a.begin(), a.end()) << "\n";
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}
