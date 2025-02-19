#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a;
        cin >> a;
        
        string b(n, 'z');
        if(a == b)
            cout << -1 << "\n";
        else
            cout << b << "\n";
    }
    return 0;
}