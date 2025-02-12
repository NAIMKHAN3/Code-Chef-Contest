#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,y;
    cin >> x >> y;
    int ans = x;
    if(y){
        ans += y* 10;
    }
    cout << ans << endl;

    return 0;
}