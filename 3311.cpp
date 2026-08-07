#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char>(m));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    vector<char> letters = {'A', 'B', 'C', 'D'};
    vector<vector<char>> newarr(n + 1, vector<char>(m + 1));
    
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            for (char c : letters){
                if (c != arr[i - 1][j - 1] && c != newarr[i][j - 1] && c != newarr[i - 1][j]){
                    newarr[i][j] = c;
                    break;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cout << newarr[i][j];
        }
        cout << '\n';
    }
}
