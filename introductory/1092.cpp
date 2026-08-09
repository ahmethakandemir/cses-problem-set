#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,t;
    cin >> n;
    t = n;
    int all = (n * (n + 1)) / 2;
    if (all & 1) {
        cout << "NO";
        return 0;
    }
    else{
        int counter = 1;
        int target = all / 2;
        int sum = 0;
        vector<bool> ans(n + 1);
        while (sum + n < target){
            ans.at(n) = 1;
            sum += n--;
            counter++;
        }
        ans.at(target - sum) = 1;
        cout << "YES\n" << counter << "\n";
        for (int i = 1; i <= t; i++){
            if (ans[i]) cout << i << " ";
        }
        cout << "\n" << t - counter << "\n";
        for (int i = 1; i <= t; i++){
            if (!ans[i]) cout << i << " ";
        }
    }

}