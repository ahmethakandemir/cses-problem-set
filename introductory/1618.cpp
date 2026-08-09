#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MAX = 2e5;
const int MOD = 1e9+7;
const int INF = 1e18;


signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, ans = 0;
    cin >> n;
    while (n != 0){
        n = n / 5;
        ans += n;
    }
    cout << ans << '\n';
}