#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,x;
    cin >> n >> x;
    vector<int> weights;
    for (int i = 0; i < n; i++){
        int inp;
        cin >> inp;
        weights.push_back(inp);
    }
    sort(weights.begin(), weights.end());
    int counter = 0;
    for (int i = 0, j = n - 1; i <= j; j--){
        if (weights[j] + weights[i] <= x){
            counter++;
            i++;
        }
        else if (weights[j] <= x) {
            counter++;
        }
    }
    cout << counter << endl;
}