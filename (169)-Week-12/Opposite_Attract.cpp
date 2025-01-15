#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string str;
        cin >> str;
        string t;
        for(char c: str){
            if(c == '0'){
                t += '1';
            }else{
                t += '0';
            }
        }
        cout << t << endl;
    }
    return 0;
}