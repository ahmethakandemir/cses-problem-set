#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MAX = 2e5;
const int MOD = 1e9+7;
const int INF = 1e18;

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string inp;
    cin >> inp;
    vector<char> start;
    vector<char> end;
    vector<char> stack;
    int i;
    for (char c:inp){
        if (start[start.size() - 1] == c && start.size() == end.size() + 1)
            end.push_back(c);
        else
            start.push_back(c);
        

    }

}