#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int result = 0;
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> demands;
    vector<int> houses;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        demands.push_back(x);
    }
    for (int i = 0; i < m; i++){
        int x;
        cin >> x;
        houses.push_back(x);
    }
    sort(houses.begin(), houses.end());
    sort(demands.begin(), demands.end());

    for(int i = 0, j = 0; i < m && j < n;){
        if (abs(houses[i] - demands[j]) <= k){
            result++;
            i++;
            j++;
        }
        else{

            if(houses[i] > demands[j]) j++;
            else i++;
        }
        
    }

    cout << result << endl;


}