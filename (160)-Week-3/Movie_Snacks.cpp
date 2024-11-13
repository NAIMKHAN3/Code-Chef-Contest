#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,y,z;
    cin >> x >> y >> z;
    int totalWithCombo = (z*2) + y;
    int withoutCombo = (x*2) + (y*3);
    cout << min(totalWithCombo, withoutCombo) << endl;
    return 0;
}