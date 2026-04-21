#include <bits/stdc++.h>
#define int long long
using namespace std;
int counter = 0;

void tohn(int n, char s, char t, char h) {
    counter++;
    if (n == 1) {
        // cout << s << ' ' << t << '\n';
        return;
    }
    tohn(n - 1, s, h, t);
    // cout << s << ' ' << t << '\n';
    tohn(n - 1, h, t, s);
}

void toh(int n, char s, char t, char h) {
    if (n == 1) {
        cout << s << ' ' << t << '\n';
        return;
    }
    toh(n - 1, s, h, t);
    cout << s << ' ' << t << '\n';
    toh(n - 1, h, t, s);
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int n;
    cin >> n;
    tohn(n, '1', '3', '2');
    cout << counter << '\n';
    toh(n, '1', '3', '2');
    
    return 0;
}
