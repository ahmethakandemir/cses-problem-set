#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    // eger x cift y tek ise ((buyuk - 1)^2 + kucuk )  
    // else (buyuk^2 - kucuk - 1).
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x,y,ans;
        cin >> x >> y;
        if (x == y){
            ans = (x*(x - 1)) + 1;    
        }
        else if (x > y){
            if (x % 2){
                ans = ((x-1) * (x-1)) + y;
            }
            else{
                ans = (x*x) + 1 - y;
            }
        }
        else if (x < y){
            if (y % 2){
                ans = (y*y) + 1 - x;
                // cout << "inside\n";
            }
            else {    
                ans = ((y - 1) * (y - 1)) + x;
            }
        }
        cout << ans << "\n";
    }
}