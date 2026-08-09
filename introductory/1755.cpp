#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MAX = 2e5;
const int MOD = 1e9+7;
const int INF = 1e18;

// 3 tane olduğu durumu düşün..

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string inp;
    cin >> inp;
    unordered_map<char,int> m;
    // for (char c = 'A'; c <= 'Z'; c++){
    //     m[c] = 0;
    // }
    for (char c : inp){
        m[c]++;
    }
    char odd = '\0';
    int oddtimes;
    int oddcounter = 0;
    for (pair p : m){
        if (p.second & 1){
            oddcounter++;
            odd = p.first;
            oddtimes = p.second;
        }
    }
    // if oddcounter > 1
    if (oddcounter > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }

	vector<char> v;
	for (auto a:m){
	    if (a.second & 1) { 
	        continue;
        }
	    for (int i = 0; i < a.second; i+=2) v.push_back(a.first);
	}
	for (int i = 0; i<v.size(); i++){
	    cout << v[i];
	}
	if (odd != '\0') 
    for (int i = 0; i < oddtimes; i++)
        cout << odd;
	for (int i = v.size() -1; i>-1; i--){
	    cout << v[i];
	}

    return 0;

    // for (auto ou : m){
    //     cout << ou.first << " : " << ou.second << "\n";
    // }

}