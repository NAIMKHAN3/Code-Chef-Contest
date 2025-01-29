#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
        int m,k;
        cin >> m >> k;
        string move;
        cin >> move ;
        int count = 0;
        for(char c: move){
            if(c == 'S'){
                count++;
            }
        }
        if(count >= k){
            cout << m << '\n';
        }else{
            cout << m + (k - count) - 1 << '\n';
        }
    }
    return 0;
}