#include <bits/stdc++.h>
using namespace std;

int solved(string &s) {
    int n = s.length();
    bool flag = true;
    
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] == s[i + 1]) {
            flag = false;
            break;
        }
    }
    
    if (flag) return 0;
    
    int countZero = 0, countOne = 0;
    for (char c : s) {
        if (c == '0') countZero++;
        else countOne++;
    }
    
    int d = abs(countZero - countOne);
    
    if (n % 2 == 0) {
        return (d == 0) ? 1 : (d == 2 ? 2 : 3);
    } else {
        return (d == 1) ? 1 : (d == 3 ? 2 : 3);
    }
}

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << solved(s) << "\n";
    }
    
    
    return 0;
}
