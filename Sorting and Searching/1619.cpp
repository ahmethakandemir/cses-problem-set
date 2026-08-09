#include <bits/stdc++.h>
#define int long long
using namespace std;
vector<int> res (10,0);

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;
    cin >> n;
    vector<pair<int,int>> v;
    set<int> s;

    for (int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        v.push_back({x,y});
        s.insert(x);
        s.insert(y);
    }
    map<int,int> m;
    int count = 1;
    for(int x : s){
        m[x] = count++; 
    }
    
    vector<int> vec (4e5, 0);
    for(auto [x,y] : v){
        vec[m[x]]++;
        vec[m[y]]--;
    }

    int current = vec[0], best = vec[0];
    for(int i = 0; i < 4e5; i++){
        current = max(vec[i], vec[i] + current);
        best = max(best, current);
    }

    cout << best << endl;

}




