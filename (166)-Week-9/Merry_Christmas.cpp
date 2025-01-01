#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;
    int ans =0;
    if(x >= 1){
        ans+=1;
        x -= 1;
    }
    if(x >= 2){
        ans += 1;
        x -= 2;
    }
    if(x >= 4){
        ans += 1;
        x -= 4;
    }
cout << ans << endl;
    return 0;
}