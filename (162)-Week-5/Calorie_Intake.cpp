#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;
    int ans = -1;
    if(z * y <= x){
    ans = x - (z * y) ;
    }
    cout << ans << endl;
    return 0;
}