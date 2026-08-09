#include <bits/stdc++.h>
using namespace std;
const int MAX = 2e5;
const int MOD = 1e9+7;
const int INF = 1e18;

#define int long long

int ans = INF;
int geneltoplam;
int n;




signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    cin >> n;
    vector<int> l(n);
    for(int i = 0; i < n; i++){
        cin >> l[i];
        geneltoplam += l[i];
    }
    
    for (int i=0; i<(1<<n); ++i) {
        int sum=0;
        for (int j=0; j<n; ++j) {
            if (i & (1<<j)) sum += l[j];
        }
        ans = min(ans, abs(geneltoplam - 2*sum));
    }

    cout << ans;
}