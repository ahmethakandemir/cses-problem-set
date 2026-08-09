#include <bits/stdc++.h>
#define int long long
using namespace std;
set<string> all;
vector<char> a,b;

void recPer(){
    if (b.size() == 0) {
        string s;
        for (char ch: a){
            s += ch;
        }
        all.insert(s);
        // cout << s << '\n';
    }    
    for (int i = 0; i < b.size(); i++){
        a.push_back(b[i]);
        b.erase(b.begin() + i);
        recPer();
        b.insert(b.begin() + i, a.back());
        a.pop_back();
    }
}


signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string input;
    cin >> input;
    for(char c : input){
        b.push_back(c);
    }
    sort(b.begin(),b.end());
    recPer();
    cout << all.size() << '\n';
    for (auto anan: all){
        cout << anan << '\n';
    }



}