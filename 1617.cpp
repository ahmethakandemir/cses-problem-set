#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MAX = 2e5;
const int MOD = 1e9+7;
const int INF = 1e18;

int fpow(int a, int b) {
    int res=1;
    while (b) {
        if (b&1) res=(res*a)%MOD;
        a=(a*a)%MOD;
        b>>=1;
    }
    return res;
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;
    cin >> n;
    cout << fpow(2,n);
}