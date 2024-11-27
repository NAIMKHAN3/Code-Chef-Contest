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
        vector<int> marks(n);
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {

            cin >> marks[i];
            ans += marks[i];
        }
        long long totalMarks = (n + 1) * 100;
        long long remaining = (totalMarks / 2);

        if(ans  >= remaining){
            cout << 0 << endl;
        }else if(( remaining - ans)> 100){
            cout << -1 << endl;
        }else{
            cout << remaining -ans << endl;
        }
    }
    return 0;
}