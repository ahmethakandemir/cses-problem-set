#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MAX = 2e5;
const int MOD = 1e9+7;
const int INF = 1e18;

void rec(unordered_map<char,int> m, char index){
    if (index > 'Z'){
        return;
    }
    if (m[index] == 0){

    }           //// RECURSIVE DUSUN.
    cout << index;
    m[index]--;
    rec(m,index + 1);
    cout << index;
    return;
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string inp;
    cin >> inp;
    int i = 0;
    unordered_map<char,int> m;
    // for (char c = 'A'; c <= 'Z'; c++){
    //     m[c] = 0;
    // }
    for (char c : inp){
        m[c]++;
    }
    char odd = '\0';
    int oddcounter = 0;
    for (pair p : m){
        if (p.second & 1){
            oddcounter++;
            odd = p.first;
        }
        p.second /= 2;
    }
    // if oddcounter > 1
    if (oddcounter > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    rec(m,'A');
    return 0;

    // for (auto ou : m){
    //     cout << ou.first << " : " << ou.second << "\n";
    // }

}