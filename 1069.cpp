#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int ans = 0;
    int i = 0;
    string s;
    cin >> s;
    char old = 'x';
    for (auto c:s){
        if (c == old) i++;
        else {
            ans = max(ans,i);
            old = c;
            i = 1;
        }
    }
    
    ans = max(ans,i);
    cout << ans << endl;
    return 0;
}