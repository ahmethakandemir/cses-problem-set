#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cout << (((i*i) * ((i*i) - 1)) - (48 + (40 * (i - 4)) + (8 * (i*i - (16 + 8 * (i - 4)))))) / 2 << "\n";
    }
}