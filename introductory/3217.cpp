#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n, -1));
    arr[0][0] = 0;
    vector<int> c1 = {-2,-2,2,2,1,1,-1,-1};
    vector<int> c2 = {1,-1,1,-1,2,-2,2,-2};
    queue<pair<int,int>> q;
    q.push({0,0});
    while(!q.empty()){
        pair<int,int> p = q.front();
        int px = p.first; 
        int py = p.second;
        q.pop();
        for (int i = 0; i < 8; i++){
            int newpx = px + c1[i];
            int newpy = py + c2[i];
            if (newpx >= 0 && newpx < n && newpy >= 0 && newpy < n && arr[newpx][newpy] == -1){
                arr[newpx][newpy] = arr[px][py] + 1;
                q.push({newpx,newpy});
            }
        }
    }




    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cout << arr[i][j] << ' ';
        }
        cout << endl;

    }
}