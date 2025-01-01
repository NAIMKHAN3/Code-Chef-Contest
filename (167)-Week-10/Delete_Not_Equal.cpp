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
        string str;
        cin >> n >> str;
        int zeroCount = 0;
        int oneCount = 0;
        int i = 0;
        while (i < n)
        {
            if (str[i] == '0')
                zeroCount++;
            else
                oneCount++;
            i++;
        }
        if(zeroCount && oneCount){
            cout << 1 << endl;
        }
        else{
            cout << str.size() << endl;
        }
    }
    return 0;
}