#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    multiset<int> prices;
    int n,m;
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        prices.insert(x);
    }
    for (int i = 0; i < m; i++){
        int x;
        cin >> x;
        auto l = prices.lower_bound(x);
        if (l == prices.end()) cout << -1 << endl;
        else{
            cout << *l << endl;
            prices.erase(l);
        }
    }
}