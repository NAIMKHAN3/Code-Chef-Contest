#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
            cin >> arr[i];
            int mx = -1;
            for(int i=0; i<n; i++){
                if(arr[i] > mx){
                    mx = arr[i];
                    cout << 1 << " ";
                }else{
                    cout << 0 << " ";
                }
            }
            cout << "\n";
    }
    return 0;
}