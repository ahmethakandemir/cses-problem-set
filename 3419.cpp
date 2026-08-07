#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));
    arr[0][0] = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            int minval = 0;
            for (int a = 0; a < i + j; a++){
                // column check
                for (int row = 0; row < i; row++){
                    if (arr[row][j] == minval) minval++;   
                }
                // row check
                for (int col = 0; col < j; col++){
                    if (arr[i][col] == minval) minval++;   
                }
            }
            arr[i][j] = minval;
            minval = 0;
        }
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

}