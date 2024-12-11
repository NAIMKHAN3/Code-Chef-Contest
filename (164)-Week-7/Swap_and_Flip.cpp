#include <bits/stdc++.h>
using namespace std;


bool isPossible(int countS1 , int countT1){
return (countS1 - countT1 + 2) % 2 == 0;
}


void solved()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    if (s == t)
    {
        cout << "YES" << endl;
        return;
    }
    int countS0 = 0;
    int countT1 = 0;
    int countS1 = 0;
    int countT0 = 0;
    for (char c : s)
    {
        if (c == '0')
            countS0++;
        else
            countS1++;
    }
    for (char c : t)
    {
        if (c == '1')
            countT1++;
        else
            countT0++;
    }
   if(isPossible(countS1,countT1)) cout << "YES" << endl;
   else cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solved();
    }
    return 0;
}