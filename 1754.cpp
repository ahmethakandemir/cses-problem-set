#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MAX = 2e5;
const int MOD = 1e9+7;
const int INF = 1e18;

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int a,b;
        cin >> a >> b;
        if ((max(a,b) == min(a,b) * 2)) 
            cout << "YES\n";
        else if (((min(a,b) - (max(a,b) - (min(a,b)))) % 3 != 0) || (max(a,b) > min(a,b) * 2)){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
}