#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,y;
    cin >> x >> y;
    int ans = x + (10 * y);
   if(ans >= 100){
    cout << "Yes" << endl;
   }else{
    cout << "No" << endl;
   }
    return 0;
}