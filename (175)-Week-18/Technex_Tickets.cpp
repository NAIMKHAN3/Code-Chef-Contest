#include <bits/stdc++.h>
using namespace std;

int solved(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return (n % 2 == 0) ? (n / 2) + 1 : (n / 2);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        cout << solved(n) << endl;
    }

    return 0;
}
