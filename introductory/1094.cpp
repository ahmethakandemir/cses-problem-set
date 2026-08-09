#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;
    cin >> n;
    int temp = 0;
    int inp;
    int ans = 0;
    for (int i = 0; i < n; i++){
        cin >> inp;
        if (inp < temp) ans += temp - inp;    
        else{
            temp = inp;
        }
    }
    cout << ans << "\n";
}