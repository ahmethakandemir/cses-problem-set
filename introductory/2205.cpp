#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9+7;

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
    // ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cout << 0;
    cout << '\n';
    for (int i = 1; i < fpow(2,n); i++){
        for (int k = 1; k < n - floor(log2(i)); k++) cout << 0;
        printf("%llb\n", (i ^ (i >> 1)));
    }
}