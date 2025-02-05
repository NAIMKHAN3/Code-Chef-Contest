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
        string a, b;
        cin >> a >> b;
        int n = a.size();
        vector<int> v(n);
        int i = a.size()-1;
        int j = b.size()-1;
        string s = "";
        while (j >= 0 && i >= 0)
        {
            if (a[i] == b[j])
            {
                s += a[i];
                v[i] = true;
                j--;
            }
            else
            {
                v[i] = false;
            }
            i--;
        }
        long long count = 1;
        long long ans = 0;
        for(int i = 0; i < n; i++){
            if(v[i]){
                count++;
            }else{
                ans+= count;
            }
        }
        reverse(s.begin(), s.end());
        if(s == b){
            cout<< ans << endl;
        }else{
            cout<< -1 << endl;
        }
    }
    return 0;
}